#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,a,mins=100000,maxs=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(mins>a){
			mins=a;
		}
		if(maxs<a){
			maxs=a;
		}
	}
	cout<<maxs-mins;	
	return 0;
}
