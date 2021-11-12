#include<stdio.h>
void main()
{
	int input,hrs,min;

	scanf("%i",&input);

	hrs=input/60;
	min=input%60;

	printf("%ihrs\t%imin",hrs,min);
	
	
}
