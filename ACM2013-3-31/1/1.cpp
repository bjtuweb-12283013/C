#include <iostream>
using namespace std;
int main()
{
	int t,i,n,num,count=1;
	int ax=0,ay=0,bx=0,by=0;
	int x,y;
	cin >>t;
	while (t--)
	{
		cin >>n;
		ax=0;ay=0;bx=0;by=0;
		for (i=0;i<n;i++)
		{
			cin >>num >>x >>y;
			if (num == 1)
			{
				ax = ax + x;
				ay = ay + y;
			}
			else if (num == 2)
			{
				bx = bx + x;
				by = by + y;
			}
		}
		cout <<"Case #" <<count <<":" <<endl;
		if (ax >= ay)
			cout <<"LIVE" <<endl;
		else 
			cout <<"DEAD" <<endl;
		if (bx >= by)
			cout <<"LIVE" <<endl;
		else 
			cout <<"DEAD" <<endl;
		count++;
	}
	return 0;
}