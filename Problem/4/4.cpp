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
	printf("您的身高为：%lf cm，",*pUserData.height);
	if (*pUserData.sex=='f' || *pUserData.sex=='F')
		printf("性别：女，");
	else printf("性别：男，");
	printf("体重：%lf kg\n",*pUserData.weight);
	printf("您的标准体重应为：%lf\n",*pUserData.standardweight);
    if (*pUserData.ResultSituation==0)
		printf("您的体重情况为：太瘦\n");
	if (*pUserData.ResultSituation==1)
		printf("您的体重情况为：正常\n");
	if (*pUserData.ResultSituation==2)
		printf("您的体重情况为：超重\n");
	if (*pUserData.ResultSituation==3)
		printf("您的体重情况为：轻度肥胖\n");
	if (*pUserData.ResultSituation==4)
		printf("您的体重情况为：中度肥胖\n");
	if (*pUserData.ResultSituation==5)
		printf("您的体重情况为：重度肥胖\n");
	
	if (*pUserData.standardweight>*pUserData.weight)
		printf("您的体重低于标准体重'%'%lf\n",*pUserData.ResultNumber);
	else printf("您的体重高于标准体重'%'%lf\n",*pUserData.ResultNumber);
}

int main()
{
	
	CheckYourWeight();
	return 0;
}



