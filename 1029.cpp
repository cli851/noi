#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	 
	double a,b,r;
	int k;
	cin>>a>>b;
	k=a/b;
	//printf("%d\n",k);
	
	//a=a-k*b;
	//printf("%g",a);
	r=a-k*b;
	cout<<r;		
	return 0;
}
