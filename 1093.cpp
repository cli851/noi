#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double x,sum=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		double t=1;
		for(int j=1;j<=i;j++)
			t=t*x;//t*=x;
		sum+=t;
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
