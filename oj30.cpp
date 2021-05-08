#include <iostream>
using namespace std;
int main()
{
	int n,sn=0,i,a=0;
	cin>>n;
	
	for(i=0;i<n;i++){
		a=a*10+2;
		sn=sn+a;
		
	}
	cout<<sn<<endl;	
	
	return 0;
}
