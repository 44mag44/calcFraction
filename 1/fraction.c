// FRACTION.C
/*
	правильная дробь
	неправильная дробь
	равная дробь
*/
#include<stdio.h>

int proper_fraction(int a, int b) // правильная дробь
{
	if(a==0)
		perror("a is not 0");
	else if(b==0)
		perror("b : 0 error");

	return (a<b);
}
int improper_fraction(int a, int b) // неправильная дробь
{
	if(a==0)
		perror("a is not 0");
	else if(b==0)
		perror("b : 0 error");

	return (a>b);
}
int equal_fraction(int a, int b) // равная дробь
{
	return (a==b);
}
