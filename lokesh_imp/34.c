//sorting an ascending order

#include<stdio.h>
void main()
{
	int a[100],size,i,j,temp;
	printf("enter size of an arrey\n");
	scanf("%d",&size);
	printf("enter arrey elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("arrey elements are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nascending order of elements are\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

