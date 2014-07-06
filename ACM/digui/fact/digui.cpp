#include <stdio.h>
int fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fact(n));
	return 0;
}

int fact(int n)
{	
	int res;
	if (n==1) return 1;
	else res=n*fact(n-1);
	return res;
}

