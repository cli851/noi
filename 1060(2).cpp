#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double b,sum=0;
	for(int i=1;i<=n;i++){
		cin>>b;
		sum+=b;
	}
	cout<<fixed<<setprecision(4)<<sum/n;
	return 0;
}
