// 	UNIT.C
/*
	левое выражение
	правое выражение
	вывод их на экран
*/
#include <stdio.h>
#include "header/fraction.h"

int left(int a, int b)
{
	// left
	a=0,b=0;

	// scanf(a,b)
	printf("a: ");
	if(!(scanf(("%d"), &a)))
		perror("scanf(a)");
	printf("b: ");
	if(!(scanf(("%d"), &b)))
		perror("scanf(b)");

	// a, b
	if(proper_fraction(a,b))
		printf("> %d/%d\n", a,b);
	else if (improper_fraction(a,b))
		printf("> %d/%d\n", a,b);
	else if(equal_fraction(a,b))
	{
		int equal=1;
		a=b=equal;
		printf("> %d\n", equal);
	}
	printf("\n");

	return 1; 
}

int right(int c, int d)
{
	// right
	c=0,d=0;

	//scanf(c,d)
	printf("c: ");
	if(!(scanf(("%d"), &c)))
		perror("scanf(c)");
	printf("d: ");
	if(!(scanf(("%d"), &d)))
		perror("scanf(d)");

	// c,d
	if(proper_fraction(c,d))
		printf("> %d/%d\n", c,d);
	else if (improper_fraction(c,d))
		printf("> %d/%d\n", c,d);
	else if(equal_fraction(c,d))
	{
		int equal=1;
		c=d=equal;
		printf("> %d\n", equal);
	}
	printf("\n");

	return 2; 
}

int input()
{
	//return  left & right
	int a=0, b=0, c=0, d=0;

	return left(a,b), right(c,d);
}
