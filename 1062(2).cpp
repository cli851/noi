#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int n,a,max=-1;
	int i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a;
		if(max<a){
		max=a;
	}
	}
	cout<<max<<endl;	
	return 0;
}
