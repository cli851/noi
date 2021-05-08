#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[i]=a[n-1-i];
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
