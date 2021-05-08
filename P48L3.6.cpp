#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	double t;
	cin>>t;
	double m;
	if(t>20)
	{
		m=20*1.68+(t-20)*1.98;
	}
	else
	{
		m=t*1.68;
	}
	printf("%.2lf",m);
	return 0;
}  
