#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x;
	int y;
	cin>>x>>y;
	if(x>y)
	{
		cout<<">";
	}
	if(x==y)
	{
		cout<<"=";
	}
	if(x<y)
	{
		cout<<"<";
	}
	return 0;
} 
