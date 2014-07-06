#include <stdio.h>
int main()
{
	int a[20][20]={0};
	int i,j,n,k;
	scanf("%d",&n);
	a[0][0]=1;
	for (i=0;i<1;i++)
		for (j=1;j<n;j++)
			a[i][j]=a[i][j-1]+1;
	for (i=2;i<n;i+=2)
		a[i][0]=a[i-2][0]+2*n;
	for (i=2;i<n;i+=2)
		for (j=1;j<n;j++)
			a[i][j]=a[i][j-1]+1;
	for (i=1;i<n;i+=2)
		a[i][0]=a[i-1][n-1]+n;
	for (i=1;i<n;i+=2)
		for (j=1;j<n;j++)
			a[i][j]=a[i][j-1]-1;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			if (a[i][j]==0) printf("\n");
			
			if (a[i][j+1]!=0) 
				printf("%d ",a[i][j]);
			else printf("%d",a[i][j]);
		}
	printf("\n");
	return 0;
}
