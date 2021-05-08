#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double t,sum=0,x,y,dis;
	int p;//人数 
	for(int i=0;i<n;i++){
		cin>>x>>y>>p; 
		dis=sqrt(x*x+y*y);//原点到屋顶的距离 
	    t=2*dis/50;
	    t=t+p*1.5;
	    sum=sum+t;
	}
		cout<<ceil(sum)<<endl;//如果不知道这个函数，可以手动取整 
		//cout<<int(sum)+1;
	return 0;
}
