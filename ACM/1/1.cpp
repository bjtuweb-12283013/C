#include <stdio.h>
int main()
{	
	int a[5],n,sum;
	while (1)
	{
		scanf("%d",&n);
		if (n==0) break;
		sum=0;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
			
		printf("%d\n",sum);
	}
	return 0;
}