/* MAIN_C */
#include <stdio.h>

#include "header/exponentiation.h"	// 	возведение рациональных чисел в степень с натуральным показателем
#include "header/property_degree.h"	// 	cвойство степени с натуральным показателем

int main() 
{
	// меню
	printf("\tМЕНЮ\n");

	// список	
	printf("1. Возведение рациональных чисел в степень с натуральным показателем\n");
	printf("2. Свойство степени с натуральным показателем\n");
	
	// выбор пункта меню
	int number=0;
	printf("\nНомер пункта: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1: exponentiation(); // возведение рациональных чисел в степень с натуральным показателем
			break;
		case 2: property_degree(); // Свойство степени с натуральным показателем
			break;
		default:
			printf ("Нет такого пункта\n");
	}

	// начать заново или выйти
	char quit=' ';
	printf("__________________"); 
	printf("\nПродолжить?(y/n) "); 

	scanf("%s", &quit);	

	if(quit=='y')
	{
		printf("\n\t****\n");
		return main();
	}

	return 0;
}
