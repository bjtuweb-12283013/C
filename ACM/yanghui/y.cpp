/*1
  1 1
  1 2 1
  1 3 3 1
  1 4 6 4 1

i=2   1ci
i=3   2ci
i=4   3ci
*/

#include <stdio.h>
int main()
{
	int i,j,n,k,m;
	int a[80][80]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		a[i][0]=1;		
		a[i][i]=1;
	}
	for (i=2;i<n;i++)
		for (j=0;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
    k=n;
	for (i=0;i<n;i++)
	{	
		k=k-1;
		for (m=0;m<k;m++)
			printf(" ");
		for (j=0;a[i][j]!=0;j++)
		{
			if (a[i][j+1]!=0)
				printf("%d ",a[i][j]);
			else printf("%d",a[i][j]);
		}
			
		
		printf("\n");
	}
}
