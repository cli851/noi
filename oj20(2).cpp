#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double r,j;
	cin>>r;
	if(r<=100000){
		j=r*0.1;
	}
	else if(r<=200000){
		j=10000+(r-100000)*0.075;
	}
	else if(r<=400000){
		j=10000+7500+(r-200000)*0.05;
	}
	else if(r<=600000){
		j=10000+7500+10000+(r-400000)*0.03;
	}
	else if(r<=1000000){
		j=10000+7500+10000+6000+(r-600000)*0.015;
	}
	else{
		j=10000+7500+10000+6000+6000+(r-1000000);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<j<<endl;
	return 0;
}
