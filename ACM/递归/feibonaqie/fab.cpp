#include <stdio.h>
int fab(int n);
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d\n",fab(n)%k);
	return 0;
}

int fab(int n)
{
	int res;
	if (n==1 || n==2)
		return 1;
	res=fab(n-1)+fab(n-2);
	return res;
}

