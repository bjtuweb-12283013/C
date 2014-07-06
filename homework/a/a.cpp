#include <stdio.h>
int main()
{
	char ch[100];
	int i=0,n,count=0;
	while ((ch[i]=getchar()) != '\n')
		i++;
	ch[i]='\0';
	n=i;
	for (i=0;i<n;i++)
		if (ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
			count++;
	printf("%d\n",n-count);
	return 0;


}
