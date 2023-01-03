/*print 1 to nth armstrong numbers*/

#include<stdio.h>
#include<math.h>
void main()
{
	int num,num1,i,temp,sum=0,rem,flog,digit=0,value;
	printf("enter the armstrong number b/n 1 to nth number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		temp=i;
		flog=i;
		num1=i;
		digit=0;
	
	
	while(num1>0)
	{
		num1=num1/10;
		digit++;
	}
	value=0;
	sum=0;
	while(temp>0)
	{
		rem=temp%10;
		value=pow(rem,digit);
		sum=sum+value;
		temp=temp/10;
	}
	if(flog==sum)
	{
		printf("%d\n",sum);
	
	}
	}
}


		
