#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int a,n;
	int sum=1;
	cin>>a>>n;
	for(int i=1;i<=n;i++){
		sum*=a;//sum=sum*a;
	}
	cout<<sum;	
	return 0;
}
