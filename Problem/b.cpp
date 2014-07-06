#include<stdio.h>
void main()
{
	int a,b,i,n;
	double sum=1;
	printf("请输入一个正整数:\n");
	scanf("%d",&n);
	for(b=1;b<=n;b++)
	{
		a=1;
		for(i=1;i<=b;i++)
			a=a*i;
		sum=sum+1/a;
	}
	printf("%lf即为所求",sum);
}

