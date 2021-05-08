#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int h,r,n;
	double pi;
	pi=3.1415926;
	cin>>h>>r;
	n=20*1000/(pi*r*r*h);
	printf("%d",n+1);
	return 0;
}
