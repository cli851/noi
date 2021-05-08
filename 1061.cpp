#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, max=0,a;
	cin>>n;
	double sum=0;
	for(int i=1;i<=n;i++){
		cin>>a;
		max+=a;
		sum+=a;
	}
	sum/=n;	
	cout<<max<<" "<<fixed<<setprecision(5)<<sum;
	return 0;
}
