#include <stdio.h>
int main()
{
	int a[6][2];
	int i,j,resmin=-2,resmax=22;
	for (i=0;i<5;i++)
		for (j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<5;i++)
	{	if (a[i][1]==1)
			if (a[i][0]>resmin)
				resmin=a[i][0]+1;
			else ;
		else if (a[i][1]==0)
			if (a[i][0]<resmax)
				resmax=a[i][0]-1;
			else ;
	}

	if (resmin>20 || resmin<0 || resmax>20 || resmax<0 )
	{	
		printf("-1\n");
		return 0;
	}

	for (i=resmin;i<=resmax;i++)
		if (i==resmax)
			printf("%d\n",i);
		else 
			printf("%d ",i);
	return 0;

}
