#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n,a=0,sn=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=2+10*a;
		sn=sn+a;
	}
	cout<<sn;
	return 0;
}
