#include <stdio.h>
int play(char word[]);
int main()
{
	int n;
	char word[1000];
	scanf("%d",&n);
	while (n--)
	{
		scanf("%s",word);
		play(word);
	}
	return 0;
}

int play(char word[])
{
	char temp[1000];
	int i,j,*p;
	while (word[i]!='\0')
		i++;
	p=&word[i];
	while 

}