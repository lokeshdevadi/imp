//check the wether number is odd or even

#include<stdio.h>
void main()
{
	int num;
	printf("enter any number\n");
	scanf("%d",&num);
	if((num&1)==0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
}
