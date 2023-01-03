/*find the second largest element in arrays*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[100],size,temp,i,j;
	printf("enter size of an arrey\n");
	scanf("%d",&size);
	printf("enter arrey elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("decending order\n");

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
		
	}
	for(i=0;i<size;i++)
        {
                printf("%d  ",a[i]);
        }

	for(i=0;i<size;i++)
	{
	if(a[i]!=(a[i+1]))
	{
		printf("\nthe second larest elemets is %d\n",a[i+1]);
		exit(0);
	}
	}
	
}
