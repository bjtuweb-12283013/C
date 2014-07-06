#include <stdio.h>
int judge();
int digit();
char train[6];
int main()
{
	
	int	n,i;
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		judge();
	}
	return 0;
}

int judge()
{
	int i;
	for (i=0;i<7;i++)
	{
		train[i]=getchar();
		if (train[i]=='\n')
		{
			train[i]='\0';
			break;
		}
	}
	if (train[0]=='K') printf("Rapid\n");
	else if (train[0]=='T' || train[0]=='Q') printf("Express\n");
	else if (train[0]=='Z') printf("SuperExpress\n");
	else if (train[0]=='D') printf("EMUExpress\n");
	else if (train[0]=='G' || train[0]=='C') printf("HighSpeed\n");
	else digit();
	return 0;
}

int digit()
{
	int i=0,sum=0;
	while (train[i]!='\0')
	{
		sum=sum*10+train[i]-'0';
		i++;
	}
	if (sum>=1000 && sum<=6000)
		printf("Semi-fast\n");
	if (sum>=6000)
		printf("Local\n");
	return 0;
}
