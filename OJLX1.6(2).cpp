#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	if(x>=5)
		if(x<9) y=x*2;
	    else if(x>14) y=x*3;
	    else y=x*5;
	else y=x+6;
	cout<<"y="<<y<<endl;
	return 0;
}
