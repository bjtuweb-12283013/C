/*
#include <stdio.h>
int main()
{
	int a=1,b=1,count=2,k,n;
	scanf("%d%d",&n,&k);
	while (1)
	{
		a=a+b;
		count++;
		if (count==n)
		{
			printf("%d\n",a%k);
			break;
		}
		b=b+a;
		count++;
		if (count==n)
		{
			printf("%d\n",b%k);
			break;
		}
	}
	return 0;
}

*/



//  F(n)=£¨¡Ì5/5)*{[(1+¡Ì5)/2]^n - [(1-¡Ì5)/2]^n}
#include <stdio.h>
#include <math.h>
int main()
{
	int n,k,itemn;
	scanf("%d%d",&n,&k);
	if (k==0) printf("%d\n",n);
	else
	{
		itemn=(sqrt(5)/5)*(pow((1+sqrt(5))/2,n)-  pow((1-sqrt(5))/2,n));
		printf("%d\n",itemn%k);
	}
	return 0;
}















































