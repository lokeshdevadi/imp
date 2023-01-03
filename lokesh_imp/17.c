/*pascal triangle*/

#include<stdio.h>
void main()
{
	int i,j,space=1,cof=1,row;
	printf("enter the pascal triangle row: ");
        scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(space=1;space<(row-i);space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
	              	if(i==0||j==0)
		    	{
				cof=1;
				printf("%d ",cof);
			}
			else
			{
				cof=cof*(i-j+1)/j;
				printf("%d ",cof);
			}
		}
		printf("\n");
	}
}
