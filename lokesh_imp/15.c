/*find the given number to prime factors*/

#include<stdio.h>
void main()
{
	int num,i,j,count;
	printf("Enter any number for printing its prime factors: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		
		if((num%i)==0)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if((i%j)==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf("%d ",i);
			}
		}
	}
}
