#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int k,a=1,b=1,c;
	//k=5;
	cin>>k;
	for(int i=3;i<=k;i++){
		c=a+b;
		a=b;
		b=c;
	}
	
//	int i;
//	i=3;
//	c=a+b;
//	a=b;
//	b=c;
//	
//	i=4;
//	c=a+b;
//	a=b;
//	b=c;
//	
//	i=5;
//	c=a+b;
//	a=b;
//	b=c;
//	
	cout<<c;
	return 0;
}
