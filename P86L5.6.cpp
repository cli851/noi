#include <iostream>
#include <cstring>
using namespace std;
int a[1001];
int main()
{
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i-1;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
