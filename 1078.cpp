#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int n,p=1,q=2;
	double sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+1.0*q/p;
		int tmp=0;
		tmp=q;
		q=p+q;
		p=tmp;
	}
	cout<<fixed<<setprecision(4)<<sum;
	return 0;
}
