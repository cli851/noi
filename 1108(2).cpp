#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
		sum+=a[i]*b[i];
	}
	cout<<sum;
	return 0;
 } 
