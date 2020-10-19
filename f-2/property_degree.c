/* PROPERTY_DEGREE_C */

#include <stdio.h>

// умножение степеней с одинаковыми основаниями
int multiplication()
{
	int m, n; // степень
	int a; // основание		
	int sum; // скмма степеней

	printf("_\n");

	printf("Основание: ");
	scanf("%d", &a);
	printf("Степень m: ");
	scanf("%d", &m);
	printf("Степень n: ");
	scanf("%d", &n);

	// проверка на натуральное число
	if(m<1 || n<1) 
	{
		perror("Не натуральное число!");
		return 0;
	}

	sum=m+n; // стпени складываются

	printf("\nОтвет: %d^%d\n\n", a, sum);

	return sum;
}

// деление степеней с одинаковыми основаниями
int devision()
{
	int m, n; // степень
	int a; // основание		
	int div; // скмма степеней

	printf("_\n");

	printf("Основание: ");
	scanf("%d", &a);
	printf("Степень m: ");
	scanf("%d", &m);
	printf("Степень n: ");
	scanf("%d", &n);

	// проверка на натуральное число
	if(m<1 || n<1) 
	{
		perror("Не натуральное число!");
		return 0;
	}

	if(m>n)
		div=m-n;
	else 
	{
		perror("Показатель меньше 0!");
		return 0;
	}
	
	if(div>0)
		printf("\nОтвет: %d^%d\n\n", a, div);
	else 
	{
		perror("Не натуральное число!");
		return 0;
	}

	return div;
}

// возведение степени в степень  с одинаковыми основаниями
int exponent()
{
	int m, n; // степень
	int a; // основание		
	int exp; // скмма степеней

	printf("_\n");

	printf("Основание: ");
	scanf("%d", &a);
	printf("Степень m: ");
	scanf("%d", &m);
	printf("Степень n: ");
	scanf("%d", &n);

	// проверка на натуральное число
	if(m<1 || n<1) 
	{
		perror("Не натуральное число!");
		return 0;
	}

	exp=m*n;

	printf("\nОтвет: %d^%d\n\n", a, exp);

	return exp;
}

// свойство степени
int property_degree()
{
	printf("_\n");
	printf("- 1. Умножение степеней\n");
	printf("- 2. Деление степеней\n");
	printf("- 3. Возведение степени в степень\n");

	int num; // выбор пункта меню

	printf("\nНомер операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1: multiplication(); // умножение степеней
		break;
	case 2: devision(); // деление степеней
		break;
	case 3: exponent(); // возведение степени в степень
		break;
	}

	return num;
}
