#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long fac=1;
	double sum=1;
	for(int i=1;i<=n;i++){
		
		fac=fac*i;
		sum+=1.0/fac;
	}
	cout<<fixed<<setprecision(10)<<sum;
	return 0;
}
