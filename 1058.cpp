#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,k,x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	if((b*b-4*a*c)<0){
		cout<<"No answer!";		
	}else{
		k=sqrt(b*b-4*a*c);
		x1=(-b+k)/(2*a);
		x2=(-b-k)/(2*a);
		if(x1==x2){
			printf("x1=x2=%.5f",x1);
		}
		else{
			if(x1<x2){
				printf("x1=%.5f;x2=%.5f",x1,x2);	
			}else{
				printf("x1=%.5f;x2=%.5f",x2,x1);	
			}	
		}
	}
	return 0;
} 
