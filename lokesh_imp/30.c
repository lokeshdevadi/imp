/*swap two numbers using bitwise operators*/

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter any number\n");
	scanf("%d%d",&a,&b);

	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\n%d\n",a,b);
}
