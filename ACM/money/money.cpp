#include <stdio.h>
int main()
{
	int type[100]={0};
	int k,n,i,j,t;
	int newmoney; //每次剩下的钱
	int sum=0,count; //计数器
	int flag=0;  //No answer 的标志
	scanf("%d%d",&k,&n);
	newmoney=n;
	for (i=0;i<k;i++)
		scanf("%d",&type[i]);
	for (i=0;i<k-1;i++)  //对所有面值的钱币进行排序
		for (j=0;j<k-1;j++)
		{
			if (type[j]<type[j+1])
			{
				t=type[j];
				type[j]=type[j+1];
				type[j+1]=t;
			}
		}
	
	i=0;
	while (1)
	{
		count=newmoney/type[i];
		sum=sum+count;
		newmoney=newmoney%type[i];
		if (newmoney==0) break;

		i++;
		if (type[i]==0) 
		{
			//printf("No answer\n");
			flag=1;
			break;
		}
		
	}
	
	if (flag==1)
	{
		newmoney=n;
		i=0;
		sum=0;
		while (1)
		{
			count=newmoney/type[i];
			sum=sum+count;
			newmoney=newmoney%type[i];
			if (newmoney==0) 
			{
				flag=0;
				break;
			}

			if (i==0) i=i+2;
			else i++;
			if (type[i]==0) 
			{
				//printf("No answer\n");
				flag=1;
				break;
			}
			
		}
	}


	if (flag==0)
		printf("%d\n",sum);
	else printf("No answer\n");
	return 0;
}