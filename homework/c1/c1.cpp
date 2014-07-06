#include <stdio.h>
int squeeze(char s1[],char s2[],char s3[]);
int main()
{
	char s1[80],s2[80],s3[80];
	int i=0;
	while ((s1[i]=getchar()) !='\n')
		i++;
	s1[i]='\0';
	i=0;
	while ((s2[i]=getchar()) !='\n')
		i++;
	s2[i]='\0';
	squeeze(s1,s2,s3);
	for (i=0;s3[i]!='\0';i++)
		printf("%c",s3[i]);
	printf("\n");
	return 0;

}

int squeeze(char s1[],char s2[],char s3[])
{
	int i,j,k=0,flag=0;
	for (i=0;s1[i]!='\0';i++)
		{
			for (j=0;s2[j]!='\0';j++)
			{
				if (s1[i]==s2[j])
					flag=1;
			}
			if (flag==0)
			{
				s3[k]=s1[i];
				k++;
			}
		}
	return 0;
}