/*find the nth bit number*/

#include<stdio.h>
void main()
{
	int num,pos,result;
	printf("enter any number\n");
	scanf("%d",&num);
	printf("enter position\n");
	scanf("%d",&pos);

	result=(num>>pos)&1;
	printf("%d",result);
}
