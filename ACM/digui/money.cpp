#include <stdio.h>
int f(int money,int type[100],int k);
int main()
{
	int k,n,i;
	int res;
	int type[100]={0};
	scanf("%d%d",&k,&n);
	for (i=0;i<k;i++)
		scanf("%d",&type[i]);
	res=f(n,type,k);
	return 0;
}

int f(int money,int type[100],int k)
{
	int res;
	int i;
	for (i=0;i<k;i++)
		if (type[i]==money)
			return 1;



	for (i=0;i<k;i++)
		res=f(type[i],type,k)+f(money-type[i],type,k);
	return res;
}
