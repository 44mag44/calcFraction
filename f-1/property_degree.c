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

// свойство степени
int property_degree()
{
	printf("_\n");
	printf("- 1. Умножение степеней с одинаковыми основаниями\n");

	int num; // выбор пункта меню

	printf("\nНомер операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1: multiplication(); // умножение степеней с одинаковыми основаниями
		break;
	}

	return num;
}
