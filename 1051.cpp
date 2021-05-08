#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x>=0&&x<5){
		y=-x+2.5;
		printf("%.3f",y);
	}else if(x>=5&&x<10){
	    y=2-1.5*(x-3)*(x-3);
		printf("%.3f",y);
	}else if(x>=10&&x<20){
	    y=x/2-1.5;
		printf("%.3f",y);
	}	
	return 0;
}
