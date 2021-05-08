#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	char a;
	int b;
	float c;
	double d;
	scanf("%c %d %f %lf",&a,&b,&c,&d);
	printf("%c %4d %4.2f %4.12lf",a,b,c,d);	
	
	return 0;
} 	
