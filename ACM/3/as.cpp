#include<stdio.h>
#include<math.h>
int main()

{   double funcos(double e,double x);
   
	double e,x;
	double s;
	scanf("%lf%lf",&e,&x);
	s=funcos(e,x);
	printf("%lf\n",s);
	return 0;
}
double funcos(double e,double x)
{   double fact (int i);
	double n=0;
    int i=0;   
	    while((pow(x,i)/fact(i))>=e)
        {
			n=n+pow(-1,i/2)*pow(x,i)/fact(i);
			i=i+2;
		}
	return n;
}
double fact(int i)
{ double p=1;
  int j;
	for(j=1;j<=i;j++)
		p=p*j;
	return p;
}
	 



    
    
    



