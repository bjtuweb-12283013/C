#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	int time[10000][2];
	
	int count=0,max=-1;
	int number=1;
	int T;
	cin >>T;
	while (T--)
	{
		cin >>n;
	/*	int **time = NULL;
		time = new int *[n];
		for (i=0;i<n;i++)
			time[i]=new int[2];
			*/
		count = 0;
		max = 0;
		for (i=0;i<n;i++)
			for (j=0;j<2;j++)
				cin >>time[i][j];
			for (i=0;i<n;i++)
				if (time[i][0] == time[i+1][0] && time[i][1] == time[i+1][1])
				{
					count++;
					if (count > max)
						max = count;
				}
				else count = 0;
		cout <<"Case #" <<number <<": ";
		cout <<max+1 <<endl;
		number++;
	}
	return 0;			
}