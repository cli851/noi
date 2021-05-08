#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float r1,r2;
	cin>>r1>>r2;
	float R;
	R=1/(1/r1+1/r2);
	printf("%.2f",R);
	return 0;
}
