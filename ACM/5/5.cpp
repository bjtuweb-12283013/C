#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,a,b,count;
	while ((scanf("%d%d",&n,&m)) !=EOF)
	{	
		
		count=0;
		for (a=0;a<=sqrt(n);a++)
		{
			b=n-pow(a,2);
			if (a+pow(b,2)==m)
				count++;
			
		}
		if (count!=0)
			printf("%d\n",count);
		else if (count==0)
			printf("\n");
	}
	return 0;
}
