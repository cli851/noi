#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double f,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f;
		sum+=f;
	}
	cout<<sum<<" "<<fixed<<setprecision(5)<<sum/n;
	return 0;
}
