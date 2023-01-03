/*print the clear nth bit of number*/


#include<stdio.h>
void main()
{
	int num,pos,result;
	printf("enter any number and position\n");
	scanf("%d%d",&num,&pos);

	result=num&(~(0x01<<pos));

	printf("%x",result);
}

