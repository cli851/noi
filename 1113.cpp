#include <iostream>
using namespace std;
int main()
{
	int a[101],n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		if(a[j]<a[i]){
			int t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
		for(int i=1;i<n;i++)
		if(a[i,a[n]]) sum+=a[i];
		cout<<sum;
		return 0;
}

