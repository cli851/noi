#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,ans=1;
	cin>>a>>b;
	for(int i=1;i<=b;i++){
		ans=ans*a;
		ans=ans%1000;
		//ans=(ans%1000*a%1000)%1000;
	}
	if(ans<10) cout<<"00"<<ans;
	if(ans>=10&&ans<100) cout<<"0"<<ans;
	if(ans>=100) cout<<ans;
	return 0;
}
