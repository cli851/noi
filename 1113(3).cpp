#include <iostream>
using namespace std;
int main()
{
	int n,max=-1000000,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]<max){
			sum+=a[i];	
		}		
	}
	cout<<sum; 
	return 0;
}

	
