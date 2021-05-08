#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n,p;
	float x,y,dis=0,t;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>p;
		dis=sqrt(x*x+y*y);
		t=2*dis/50;
		t=t+p*1.5;
	}
	cout<<ceil(t)<<endl;
	return 0;
}
