#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum-1.0*1/i;
		}else{
			sum=sum+1.0*1/i;
		}
	}
	cout<<fixed<<setprecision(4)<<sum;
	return 0;
}
