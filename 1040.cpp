#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double a;
	//scanf("%lf",&a);
	//if(a<0){
		//a=-a;
	//}
	//printf("%.2lf",a);	
	scanf("%lf",&a);
	if(a>=0){
		printf("%.2lf",a);
	}
	else if(a<0){
			a=-a;
			printf("%.2lf",a);
	}
	return 0;
}
