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
	//c++������λС���İ취��c��һ����setprecision��˼�����þ��� 
	return 0;
}
