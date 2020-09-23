/*	UNIT.C */
/*******************************************************************************/
#include <stdio.h>
#include "header/fraction.h"

struct property_left
{
	int a;
	int b;
} pl;
struct property_right
{
	int c;
	int d;
} pr;

// ошибка, если  x<=0
int error(int var)
{
	return (var<=0);
}
// проверка на ошибку при вводе натуральтного числа
int Nvar(int var)
{
	int N;
	var=0;
	N=var;
	if(!(scanf(("%d"), &N)))
		perror("scanf(var)");

	return N;
}
// выделение целой части
int improper(int a, int b)
{
	int x,y;
	x=a/b;	//	x	=	13 : 3	|	x	=	4, b	=	3
	y=x*b;	//	y	=	3  * x		|	y	=	12
	a=a-y;	//	a	=	13 - y	|	a	=	1	
	
	if(a!=0)
		printf(" = %d(%d/%d)", x,a,b); //  => x(a/b)=4(1/3)
	else if(a==0)
			printf(" = %d", x); 

	return x;
}
// основное свойство дроби - левое
int bpfl(int a, int b)
{
	pl.a=a;
	pl.b=b;
	return 1;
}
// основное свойство дроби - правое
int bpfr(int c, int d)
{
	pr.c=c;
	pr.d=d;
	return 1;
}
// левое выражение
int left(int a, int b)
{
	// left
	a=pl.a;
	printf("a: ");
	a=Nvar(a);
	if(error(a))
		perror("error: a");
	
	b=pl.b;
	printf("b: ");
	b=Nvar(b);
	if(error(b))
		perror("error: b");

	// a, b
	if(proper_fraction(a,b))
		printf("proper:  %d/%d\n", a,b);
	else if (improper_fraction(a,b))
	{
		printf("improper:  %d/%d", a,b);
		improper(a,b);
	}
	else if(equalAB(a,b))
		printf("equalAB: %d/%d = %d\n", a,b, a/b);

	printf("\n");
	
	bpfl(a,b); // основное свойство дроби - левыя дробь	

	return 1; 
}
//правое  выражение
int right(int c, int d)
{
	// right
	c=pr.c;
	printf("c: ");
	c=Nvar(c);
	if(error(c))
		perror("error: c");

	d=pr.d;
	printf("d: ");
	d=Nvar(d);
	if(error(d))
		perror("error: d");

	// c,d
	if(proper_fraction(c,d))
		printf("proper: %d/%d\n", c,d);
	if (improper_fraction(c,d))
	{
		printf("improper: %d/%d", c,d);
		improper(c,d);
	}
	if(equalAB(c,d))
		printf("equalAB: %d/%d = 1\n", c,d);

	bpfr(c,d); // основное свойство дроби - правая дробь	

	return 1; 
}
// основное свойство дроби - вывод
int bpf()
{
	int ad=0, bc=0;
	bpfl(pl.a,pl.b);
	bpfr(pr.c,pr.d);
	
	ad=pl.a*pr.d;
	bc=pl.b*pr.c;
	if(ad==bc)
		printf("\nBasic property of a fraction: ad==bc\n");

	return 0;
}
// вывод на экран
void input()
{
	left(pl.a,pl.b), right(pr.c,pr.d);
	bpf();
}
/******************************************************************************/
