#include <iostream>
using namespace std;
int main()
{
	int n;
	bool JianGuoFeiLingShu=false;
	cin>>n;
	if(n<0){
		cout<<"-";
		n=-n;
	}
	
	while(n!=0){
		if(n%10!=0){
			JianGuoFeiLingShu=true;
		}
		if(JianGuoFeiLingShu){
			cout<<n%10;
		}
		n=n/10;
	}	
	return 0;
}
