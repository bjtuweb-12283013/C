#include <stdio.h>
int main()
{
	char ch[100];
	int i=0;
	while ((ch[i]=getchar()) != '\n')
		i++;
	ch[i]='\0';
	for (i=0;ch[i]!='\0';i++)
		if (ch[i]>='A' && ch[i]<='Z')
			printf("%c",'A'+'Z'-ch[i]);
		else printf("%c",ch[i]);
	printf("\n");
	return 0;
}