#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1){
		cout<<2;
		return 0;
	}
	if(n==2){
		cout<<3.5;
		return 0;
	}
	int a[n];
	int b[n];
	a[0]=2,a[1]=3,b[0]=1,b[1]=2;
	for(int i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	float c[n];
	for(int i=0;i<n;i++){
		c[i]=a[i]*1.0/b[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+c[i];
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
