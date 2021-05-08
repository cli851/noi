#include <iostream>
using namespace std;
int main()
{
	int M,Max=-10000,Min=10000;
	cin>>M;
	int a[M];
	for(int i=0;i<M;i++){
		cin>>a[i];
		if(a[i]>Max){
			Max=a[i];
		}
		if(a[i]<Min){
			Min=a[i];
		}
	}
	cout<<Max-Min;
	return 0;
}

