#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	 
	int x,y;
	cin>>x>>y;
	double avg=(x*87+y*85)*1.0/(x+y);
	printf("%.2lf",avg);
	return 0;
}	
