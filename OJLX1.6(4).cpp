#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	if(a>3)
		if(a>6)
			if(a<=9) b=2;
	        else b=3;
	    else b=4;
	else 
	    if(a>1)
	       b=1;
	    else
	       b=0;
	cout<<"b="<<b<<endl;
	return 0;
}
