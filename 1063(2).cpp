#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int n,a,maxs=-1,mins=100000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(maxs<a){
			maxs=a;
		}
		if(mins>a){
			mins=a;
		}
	}
	cout<<maxs-mins;
	return 0;
}
