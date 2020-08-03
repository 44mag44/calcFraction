#include<stdio.h>

int proper_fraction(int a, int b) // правильная дробь
{
	if(a<b) return 1;
	if(a==b)
	{
		int temp=1;
		a=b=temp;
	}
	if((a==0))
		perror("a is not 0");
	if((b==0))
		perror("b : 0 error");
	return 0;
}
int improper_fraction(int a, int b) // неправильная дробь
{
	if(a>b) return 2;
	return 0;
}
