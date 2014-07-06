#include <stdio.h>
int main()
{
	int i,j,a[6][2];
	while ((scanf("%d%d",&a[0][0],&a[0][1]))!=EOF)
	{int max=21,min=0;
	for (i=1;i<5;i++)
		for (j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<5;i++)
	{
		if (a[i][1]==0)
			if (a[i][0]<max)
				max=a[i][0];
			else ;
		else if (a[i][1]==1)
		{
			if (a[i][0]>min)
				min=a[i][0];
		}
	}
	min=min+1;
	max=max-1;
	if (min>max || max<0 || max>20 || min<0 || min>20 )
	{
		printf("-1\n");
		continue;
	}
	
	for (i=min;i<=max;i++)
		if (i==max)
		{	
			printf("%d",i);
			printf("\n");
		}
		else 
		{
			printf("%d ",i);
		}
	}
	return 0;
}
