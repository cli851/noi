#include <iostream>
using namespace std;
int main()
{
	int a[10001],M;
	cin>>M;
	for(int i=1;i<=M;i++)
	cin>>a[i];
	for(int i=1;i<=M;i++){
		for(int j=i+1;j<=M;j++){
			if(a[j]<a[i]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}	
	}
	cout<<a[M]-a[1];
	return 0;
}
