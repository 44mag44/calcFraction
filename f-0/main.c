/* MAIN_C */
#include <stdio.h>

#include "header/exponentiation.h"	// 	возведение рациональных чисел в степень с натуральным показателем


int main() 
{
	// меню
	printf("\tМЕНЮ\n");

	// список	
	printf("- 1. Возведение рациональных чисел\n в степень с натуральным показателем\n\n");
	
	// выбор пункта меню
	int number=0;
	printf("Номер операции: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1: exponentiation(); // возведение рациональных чисел в степень с натуральным показателем
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
