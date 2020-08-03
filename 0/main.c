#include <stdio.h>
#include "impFraction_pFraction.h"

int main()
{
	// left
	int a=0,b=0;
	// scanf(a,b)
	printf("a: ");
	if(!(scanf(("%d"), &a)))
		perror("scanf()");
	printf("b: ");
	if(!(scanf(("%d"), &b)))
		perror("scanf()");
	// a, b
	if(proper_fraction(a,b))
		printf("(%d/%d)\n", a,b);
	else if (improper_fraction(a,b))
		printf("(%d/%d)\n", a,b);

	// right
	int c=0,d=0;
	//scanf(c,d)
	printf("c: ");
	if(!(scanf(("%d"), &c)))
		perror("scanf()");
	printf("d: ");
	if(!(scanf(("%d"), &d)))
		perror("scanf()");
	// c,d
	if(proper_fraction(c,d))
		printf("(%d/%d)\n", c,d);	
	else if (improper_fraction(c,d))
		printf("(%d/%d)\n", c,d);

	// choice operation
	/*
	char operator;
	printf("ch: ");
	scanf("%s", &operator);
	switch(operator)
	{
		case '+':
			printf("%d\n", left+right);
			break;
		default:
			printf("=(\n");
	}
	*/
	return 0;
}
