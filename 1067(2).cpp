#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int k,n,sum1=0,sum2=0,sum3=0;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>n;
		if(n==1){
			sum1++;
		}
		if(n==5){
			sum2++;
		}
		if(n==10){
			sum3++;
		}
	}
	cout<<sum1<<endl<<sum2<<endl<<sum3;
	return 0;
}
