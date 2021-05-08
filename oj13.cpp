#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float i,j;
	scanf("%f",&i);
	if(i<=10*10000){
		j=i*0.1;
	}
	else if(i>10*10000&&i<=40*10000){
		j=100000*0.1+(i-100000)*0.05;
	}
	else if(i>400000){
		j=100000*0.1+(i-100000)*0.05+(i-400000)*0.03;
	}
	    printf("%.1f",j);		
	return 0;
}
