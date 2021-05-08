#include <iostream>
using namespace std;
int main()
{
	int n,a,max=0;//max=-1;
	cin>>n;
	int i;
	for(i=1;i<=n;i++){
		cin>>a;
		if(max<a){
			max=a;
		}
	}
	cout<<max<<endl;
	cout<<i-1;
	return 0;
}
