#include <iostream>
#include <cmath>
#include <iomanip>
#include <float.h>
using namespace std;
int main()
{
	float sum=0,mx,mi,avg=0;
	mx=FLT_MIN;
	mi=FLT_MAX;
	int n,pm,pi;
	cin>>n;
	float a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i]; 
		//找到的同时，我们要记录下标
		if(mx<a[i]){
			mx=a[i];
			pm=i;
		}
		if(mi>a[i]){
			mi=a[i];
			pi=i;
		} 
	}
	avg=(sum-mx-mi)/(n-2);
	float max=0;
	float diff=0;
	for(int i=0;i<n;i++){
		if(i==pm||i==pi){
			continue;
		}
		if(avg>a[i]){
			diff=avg-a[i];
		}else{
			diff=a[i]-avg;
		}
		if(diff>max){//坑点不能排除所有最值只能排除一个 
		 	max=diff;
		}
		
	}
	cout<<fixed<<setprecision(2)<<avg<<" "<<max;
	return 0;
}

