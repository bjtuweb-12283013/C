#include <stdio.h>
int judge(int n);
int main()
{
	int i;
	int flag;
	scanf("%d",&i);
	flag=judge(i);
	if (flag==1)
		printf("%d is sushu\n",i);
	else printf("%d is not a sushu\n",i);
	return 0;
}

int judge(int n)
{
	int i;
	int flag;
	if (n==2)
		return 1;
	for (i=2;i<n;i++)
	{
		flag=1;
		if (n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
