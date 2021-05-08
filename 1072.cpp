#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p,r;
	cin>>p>>r;
	double v=r*1.0/p;
	for(int i=0;i<n-1;i++){
		cin>>p>>r;
		double tmp=r*1.0/p;
		if(v-tmp>0.05) cout<<"worse"<<endl;
		else if(tmp-v>0.05) cout<<"better"<<endl;
		else cout<<"same"<<endl;
	}		
	return 0;
}
