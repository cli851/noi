#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int k,a=1,b=1,c;
	cin>>k;
	for(int i=3;i<=k;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}
	/*int k,a=1,b=1,c;
	cin>>k;
	for(int i=3;i<=k;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;*/
