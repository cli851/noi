#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x,r;
  	cin>>x;
	if(x<=100000){
		r=x*0.1;
	}else if(x<=200000){
		r=10000+(x-100000)*0.075;
	}else if(x<=400000){
		r=10000+7500+(x-200000)*0.05;
	}else if(x<=600000){
		r=10000+7500+10000+(x-400000)*0.03;
	}else if(x<=1000000){
		r=10000+7500+10000+6000+(x-600000)*0.015;
	}else{
		r=10000+7500+10000+6000+6000+(x-1000000)*0.01;
	}
	//printf("%.2f",r);
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<r<<endl;
	return 0;
}
