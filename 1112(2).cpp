#include <iostream>
using namespace std;
int main()
{
	int a[10001],max=-10000,min=10000;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		cin>>m;
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	
	cout<<max-min;
	return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
	int a[10001],M,Max,Min;
	cin>>M;cin>>a[1];
	Max=Min=a[1];
	for(int i=2;i<=M;i++){
		cin>>a[i];
		if(a[i]>Max) Max=a[i];
		if(a[i]<Min) Min=a[i];
	}   cout<<Max-Min;	
	return 0;
}*/

