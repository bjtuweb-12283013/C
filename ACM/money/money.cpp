#include <stdio.h>
int main()
{
	int type[100]={0};
	int k,n,i,j,t;
	int newmoney; //ÿ��ʣ�µ�Ǯ
	int sum=0,count; //������
	int flag=0;  //No answer �ı�־
	scanf("%d%d",&k,&n);
	newmoney=n;
	for (i=0;i<k;i++)
		scanf("%d",&type[i]);
	for (i=0;i<k-1;i++)  //��������ֵ��Ǯ�ҽ�������
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