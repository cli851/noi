#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n,i;
	int a;
	cin>>n;
	float sum=0;
	for(i=1;i<=n;i++){
		cin>>a;
		sum=sum+a;
	}
	cout<<fixed<<setprecision(2)<<sum/n<<endl;
	return 0;
}
