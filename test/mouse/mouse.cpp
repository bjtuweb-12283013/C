#include <stdio.h>
#include <math.h>

int judge(int a,int b,int c,int d);
void input();

int main()
{
	input();
	return 0;
}

void input()
{
	int a,b,c,d;  //mouse situation  1(died) 0(live)
	int result;
	printf("please input the situation of each mouse:   1 for died  0 for live\n");
	printf("the first mouse is:");
	scanf("%d",&a);
	printf("\n");
	printf("the second mouse is:");
	scanf("%d",&b);
	printf("\n");
	printf("the third mouse is:");
	scanf("%d",&c);
	printf("\n");
	printf("the fourth mouse is:");
	scanf("%d",&d);
	printf("\n");

	result=judge(a,b,c,d)+1;
	printf("the bottle is %d\n",result);
}

int judge(int a,int b,int c,int d)
{
	int mouse[4];
	mouse[0]=a;
	mouse[1]=b;
	mouse[2]=c;
	mouse[3]=d;
	int result;
	result=mouse[0]*pow(2,3)+mouse[1]*pow(2,2)+mouse[2]*pow(2,1)+mouse[3];
    return result;
}
