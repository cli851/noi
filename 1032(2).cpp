#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double pi;
	int h,r,n;
	pi=3.1415926;
	scanf("%d%d",&h,&r);
	n=20*1000/(h*r*r*pi);
	printf("%d",n+1);
	return 0;
}
