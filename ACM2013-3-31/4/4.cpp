#include <iostream>
using namespace std;
int main()
{
	int chest=0,biceps=0,back=0;
	int number = 1;
	int n,i,j,time;
	int T;
	cin >>T;
	while (T--)
	{
		cin >>n;
		chest=0;biceps=0;back=0;
		for (i=1;i<=n;i++)
		{
			cin >>time;
			if (i % 3 == 1)
				chest+=time;
			if (i % 3 == 2)
				biceps+=time;
			if (i % 3 == 0)
				back+=time;
		}
		cout <<"Case #" <<number <<":" <<endl;
		if (chest>biceps && chest>back)
			cout <<"chest" <<endl;
		if (biceps>chest && biceps>back)
			cout <<"biceps" <<endl;
		if (back>chest && back>biceps)
			cout <<"back" <<endl;
		number++;
	}
	return 0;
}