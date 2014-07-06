#include <stdio.h>
#include <math.h>
double funcos(double e,double x);
double fact(int n);
int main()
{
	double e,x,res;
	scanf("%lf%lf",&e,&x);
	res=funcos(e,x);
	printf("%lf\n",res);
	return 0;
}

double funcos(double e,double x)
{
	double item=1,sum=1;
	int i=2;
	while (fabs(item)>=e)
	{
		item=pow(-1,i/2)*(pow(x,i)/fact(i));
		sum=sum+item;
		i=i+2;
	}
	return sum;
}

double fact(int n)
{
	double res=1;
	for (int i=1;i<=n;i++)
		res=res*i;
	return res;
}

