/*toggle nth bit of number*/

#include<stdio.h>
void main()
{
	int num,pos,result;
	printf("enter  any number\n");
	scanf("%d",&num);
	printf("enter any position");
	scanf("%d",&pos);

	result=num^(0x01<<pos);

	printf("%x\n",result);
}
