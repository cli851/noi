#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int k,a,sum1=0,sum2=0,sum3=0;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>a;	
		if(a==1){
			sum1++;
		}
		if(a==5){
			sum2++;
		}
		if(a==10){
			sum3++;
		}
	}
	cout<<sum1<<endl<<sum2<<endl<<sum3;
	return 0;
}
