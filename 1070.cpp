#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	double x,n;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		x=x*1.001;
	}
	cout<<fixed<<setprecision(4)<<x;
	return 0;
}
