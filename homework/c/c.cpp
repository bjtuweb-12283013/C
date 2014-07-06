#include <stdio.h>
int play(char a[],char b[]);
int n_ch,n_chd;
int main()
{
	char ch[100],ch_d[100];
	int i=0;
	while ((ch[i]=getchar()) != '\n')
		i++;
	n_ch=i;
	ch[i]='\0';
	i=0;
	while ((ch_d[i]=getchar()) != '\n')
		i++;
	n_chd=i;
	ch_d[i]='\0';
	play(ch,ch_d);
	return 0;
}

int play(char a[],char b[])
{
	int i,j,k;
	for (i=0;i<n_ch;i++)
		for (j=0;j<n_chd;j++)
			if (a[i]==b[j])
			{
				for (k=i;k<n_ch/*i+n_chd*/;k++)
					a[k]=a[k+1];
			//	a[i+n_chd]='\0';
			}
	for (i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;

}