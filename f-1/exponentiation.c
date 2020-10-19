/* EXPONENTIATION_С */

#include <stdio.h>

// рациональьные числа для основания степени
float Q(float a)
{
	scanf("%f", &a);
	return a;
}

// натуральные числа для показателя
int N(int k)
{
	scanf("%d", &k);

	if (k<=0)
		perror("что то пошло не так =(");

	return k;
}

// возведение рациональных чисел в степень с натуральным показателем
int exponentiation()
{
	float a=0.0; // основание степени
	int k=0; // показатель
	float raised_number=1; // число возведенное в степень
	
	printf("_\n");

	printf("Основание степени: ");
	a=Q(a); // ввод основания 	
	

	printf("Показатель степени: ");
	k=N(k); // ввод показателя

	if(k>1)
		for(; k>0; k--)	
			raised_number*=a;
	else if(k<1)
		perror("что то пошло не так =(");		

	printf("Ответ: %0.5f\n", raised_number);	

	return raised_number;
}
