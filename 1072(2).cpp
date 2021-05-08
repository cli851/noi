#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int p,r;
	cin>>p>>r;
	double x=r*1.0/p;
	for(int i=0;i<=n-1;i++){
		cin>>p>>r;
		double y=r*1.0/p;
		if(x-y>0.05) cout<<"worse"<<endl;
		else if(y-x>0.05) cout<<"better"<<endl;
		else cout<<"same";
	}
	return 0;
}
