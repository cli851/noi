#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a; 
	double sum=0 ;
	for(int i=1;i<=n;i++){
		cin>>a;
		sum+=a;//sun=sum+a;
		//cout<<i<<" "<<a<<" "<<sum<<endl;
	}
	cout<<fixed<<setprecision(2)<<sum/n;
	//c++设置两位小数的办法和c不一样，setprecision意思是设置精度 
	return 0;
}
