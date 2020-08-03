/* FRACTION.C */
/*******************************************************************************/
#include<stdio.h>

// правильная дробь
int proper_fraction(int a, int b)
{
	if(a<=0)
	{
		perror("error: VAR <=0");
		return 0;	
	}
	if(b<=0)
	{
		perror("error: VAR <=0");
		return 0;	
	}

	return (a<b);
}
// неправильная дробь
int improper_fraction(int a, int b) 
{
	if(a<=0)
	{
		perror("error: VAR <=0");
		return 0;	
	}
	if(b<=0)
	{	
		perror("error: VAR <=0");
		return 0;	
	}
	
	return (a>b);
}
// a==b
int equalAB(int a, int b)
{
	if(a<=0)
	{
		perror("error: VAR <=0");
		return 0;	
	}
	if(b<=0)
	{	
		perror("error: VAR <=0");
		return 0;	
	}

	return (a==b);
}
// равная дробь
int equal_fraction(int a, int b)
{
	if(a<=0)
	{
		perror("error: VAR <=0");
		return 0;	
	}
	if(b<=0)
	{	
		perror("error: VAR <=0");
		return 0;	
	}

	return (a==b);
}
/*******************************************************************************/
