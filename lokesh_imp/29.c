/*decima to binary using bitwise operators*/


#include<stdio.h>
void main()
{
	int num,rem,i=1;
	printf("enter any number\n");
	scanf("%d",&num);
	long long int sum=0;
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		sum=sum+rem*i;
		i=i*10;
	}
	printf("%lld",sum);
}
