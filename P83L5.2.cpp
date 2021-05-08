#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[900];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t=a[0];
	for(int i=1;i<=n-1;i++){
		a[i-1]=a[i];
	}
	a[n-1]=t;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
