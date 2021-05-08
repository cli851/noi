#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double p=3.1415926535;
	double r,h;
	double s;
	cin >> r >>h;
	//表面积=底面积*2+侧面积
	s=2*p*r*r+2*p*r*h;
	//cout<<s;		
	printf("%.3f",s);
	return 0;
}  
