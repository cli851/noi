#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	if(a%2==0&&a%3==0)
		if(b%a>a%b)
		  c=a;
		else
		  c=b;
	else 
	    if(a/b<=4)
	      c=a/b;
	    else
	      c=a-b;
	cout<<"c="<<c<<endl;
	return 0;
}
