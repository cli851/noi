#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	double a,b,c;
	cin>>a>>b>>c;
	double s,p;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf",s);
	return 0;
} 	
