#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double pi=3.14159;
	double r=0;
	cin>>r;
	double d,c,_s;
	d=2*r;
	c=2*pi*r;
	_s=pi*r*r;
	printf("%.4lf %.4lf %.4lf",d,c,_s);
	return 0;
}
