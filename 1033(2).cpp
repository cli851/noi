#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2,s;
	cin>>x1>>y1;
	cin>>x2>>y2;
	s=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("%.3lf",sqrt(s));	
	return 0;
}
