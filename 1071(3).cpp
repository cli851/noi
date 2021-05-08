#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a=1,b=1,c,k;
	cin>>k;
	for(int i=3;i<=k;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}
