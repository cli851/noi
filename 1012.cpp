#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double x,a,b,c,d;		
	cin>>x>>a>>b>>c>>d;
	double f;
	f=1.0*(a*x*x*x+b*x*x+c*x+d);
	printf("%.7lf", f);
	return 0;
}
