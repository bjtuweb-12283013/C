#include <stdio.h>
#include <math.h>
struct CheckInfoStru 
{
	char sex;
	double height;
	double weight;
	int ResultSituation;
	double ResultNumber;
	double standardweight;
};



	double StandardWeight(char cGender,double dHeight); //return standard weight
	int WeightStatus(double dStandardWeight,double dActualWeight); //return 0-5
	void OutputResult(CheckInfoStru UserData);  
	void CheckYourWeight();

int WeightStatus(double dStandardWeight,double dActualWeight) //63 50
{
	if (dActualWeight<(dStandardWeight*0.9)) 
		return 0;
	if ((dActualWeight>= (dStandardWeight*0.9)) && (dActualWeight<= (dStandardWeight*1.1)) )
		return 1;
	if ( (dActualWeight> dStandardWeight*1.1) && (dActualWeight< dStandardWeight*1.2))
		return 2;
	if ( (dActualWeight> dStandardWeight*1.2) && (dActualWeight< dStandardWeight*1.3))
		return 3;
	if ( (dActualWeight> dStandardWeight*1.3) && (dActualWeight< dStandardWeight*1.5))
		return 4;
	if (dActualWeight>(dStandardWeight*1.5))
		return 5;
		
}

void CheckYourWeight()
{
	CheckInfoStru UserData;
	CheckInfoStru *pUserData;
	pUserData=&UserData;
	printf("please input sex,height,weight:\n");
	*pUserData.sex=getchar();
	scanf("%lf",&(*pUserData.height));
	scanf("%lf",&(*pUserData.weight));

	int degree;
	double _dStandardWeight;
	_dStandardWeight=StandardWeight(*pUserData.sex,*pUserData.height);
	degree=WeightStatus(_dStandardWeight,*pUserData.height); 
	*pUserData.ResultSituation=degree;
	*pUserData.ResultNumber=fabs((*pUserData.weight-_dStandardWeight)/(_dStandardWeight))*100;
	*pUserData.standardweight=StandardWeight(*pUserData.sex,*pUserData.height);
	OutputResult(*pUserData);
}


double StandardWeight(char cGender,double dHeight)
{
	double _StandardWeight;
	if (cGender=='f' || cGender=='F')
		_StandardWeight=(dHeight-100)*0.9-2.5;
	else 
		_StandardWeight=(dHeight-100)*0.9;
	return _StandardWeight;
}




void OutputResult(CheckInfoStru *pUserData)  
{
	printf("�������Ϊ��%lf cm��",*pUserData.height);
	if (*pUserData.sex=='f' || *pUserData.sex=='F')
		printf("�Ա�Ů��");
	else printf("�Ա��У�");
	printf("���أ�%lf kg\n",*pUserData.weight);
	printf("���ı�׼����ӦΪ��%lf\n",*pUserData.standardweight);
    if (*pUserData.ResultSituation==0)
		printf("�����������Ϊ��̫��\n");
	if (*pUserData.ResultSituation==1)
		printf("�����������Ϊ������\n");
	if (*pUserData.ResultSituation==2)
		printf("�����������Ϊ������\n");
	if (*pUserData.ResultSituation==3)
		printf("�����������Ϊ����ȷ���\n");
	if (*pUserData.ResultSituation==4)
		printf("�����������Ϊ���жȷ���\n");
	if (*pUserData.ResultSituation==5)
		printf("�����������Ϊ���ضȷ���\n");
	
	if (*pUserData.standardweight>*pUserData.weight)
		printf("�������ص��ڱ�׼����'%'%lf\n",*pUserData.ResultNumber);
	else printf("�������ظ��ڱ�׼����'%'%lf\n",*pUserData.ResultNumber);
}

int main()
{
	
	CheckYourWeight();
	return 0;
}



