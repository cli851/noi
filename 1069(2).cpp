#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int a,n,sum=1;
	cin>>a>>n;
	for(int i=1;i<=n;i++){
		sum=sum*a;
	}
	cout<<sum;
	return 0;
}
