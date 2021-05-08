#include <iostream>
using namespace std;
int main()
{
	int M,max=-10000,min=10000;
	cin>>M;
	int a[M];
	for(int i=0;i<M;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<max-min;
	return 0;
}

	
