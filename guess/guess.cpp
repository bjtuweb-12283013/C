#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int num,a,max;
	int flag=0;   //1 for win
	char yesno;
	int test;
	scanf("%d",&max);
	srand(max);
	num=rand();
	while (num>max)
		num=rand();

	for (;;)
	{
		if (flag==1)
		{
			num=rand();
			while (num>max)
				num=rand();
			flag=0;
		}
		scanf("%d",&a);
		if (a==num)
		{
			printf("You win!\n");
			flag=1;
			printf("1 to continue,0 to end:\n");
			scanf("%d",&test);
			if (test==1)
				continue;
			else 
				break;
		}
		if (a>num)
		{
			printf("Too big.\n");
			continue;
		}
		if (a<num)
		{
			printf("Too small.\n");
			continue;
		}
	} 
	return 0;
}

