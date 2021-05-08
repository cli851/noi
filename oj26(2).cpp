#include <iostream>
using namespace std;
int main()
{
	int n,pi,max=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	if(a[i]>max){
	
		max=a[i];
		pi=i;
		}
	}
	cout<<max<<" "<<pi;
	return 0;
}


