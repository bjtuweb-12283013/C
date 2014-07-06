#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[110];
	int i,j,length,T;
	int count=1;
	int n=1;
	cin >>T;
	while (T--)
	{
		count = 1;
		cin >>str;
		length = strlen(str);
		for (i=0;i<length;i++)
			for (j=0;j<i;j++)
			{
				if (str[i] == str[j])
					break;
				if (j == i-1)
					count++;
			}
		cout <<"Case #" <<n <<": ";
		if (count % 2 == 0)
			cout <<"CHAT WITH HER!" <<endl;
		else 
			cout <<"IGNORE HIM!" <<endl;
		n++;
	}		
	return 0;
}