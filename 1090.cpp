#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	bool NengBei19zhengchu=false;
	bool YouKGe3=false;
	int count=0;
	if(n%19==0){
		NengBei19zhengchu=true;	
	}
	while(n!=0){
		if(n%10==3){
			count=count+1;
		}
		n=n/10;
	}
	if(k==count){
		YouKGe3=true;
	}
	if(NengBei19zhengchu&&YouKGe3){
		cout<<"YES";
	}else {
		cout<<"NO";
	}
	return 0;
}
