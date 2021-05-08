#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double a,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		sum+=a;
	}
	cout<<fixed<<setprecision(4)<<sum/n;
	return 0;
}
