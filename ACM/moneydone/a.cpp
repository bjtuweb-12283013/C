#include<stdio.h>
int main()
{
	int a[7],b[7],c[7],k,n;
	int i,sum,s,t;
	t=1000000;
	sum=0;
	s=0;
	scanf("%d%d",&k,&n);
	for(i=0;i<7;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		c[i]=n/a[i];
	for(b[0]=0;b[0]<=c[0];b[0]++)
		for(b[1]=0;b[1]<=c[1];b[1]++)
			for(b[2]=0;b[2]<=c[2];b[2]++)
				for(b[3]=0;b[3]<=c[3];b[3]++)
					for(b[4]=0;b[4]<=c[4];b[4]++)
						for(b[5]=0;b[5]<=c[5];b[5]++)
							for(b[6]=0;b[6]<=c[6];b[6]++)
							{
								sum=0;
								for(i=0;i<k;i++)
									sum=sum+a[i]*b[i];
								if(sum==n)
								{
									s=0;
									for(i=0;i<k;i++)
										s=s+b[i];
									if(t>s)
										t=s;
								}
							}
	printf("%d\n",t);
	return 0;
}