#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	int d,A,B,C;
	A=1,B=3,C=2;
	d=B*B-4*A*C;
	float x1,x2;
	x1=(-B+sqrt(d))/2*A;
	x2=(-B-sqrt(d))/2*A;
	printf("x1=%-8.3fx2=%-8.3f\n",x1,x2);
	return 0;
}
