#include<stdio.h>
void main()
{
	int num,pos,result;
	printf("enter any number\n");
	scanf("%x",&num);
	printf("enter position\n");
	scanf("%d",&pos);

	result=num|(0x01<<pos);
	printf("%x",result);
}

