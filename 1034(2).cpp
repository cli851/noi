#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{{
	double x1,x2,x3,y1,y2,y3,a,b,c,p,s;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f",s);	
	return 0;
}}
