#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,daysLater=1,ans=0;//ans=3;
	cin>>a>>b;
	for(int i=1;i<=b;i++){
		daysLater=daysLater*a;
		daysLater=daysLater%7;
	}
	ans=(ans+daysLater)%7;
	if(ans==0) cout<<"Sunday";
	if(ans==1) cout<<"Monday";
	if(ans==2) cout<<"Tuesday";
	if(ans==3) cout<<"Wednesday";
	if(ans==4) cout<<"Thursday";
	if(ans==5) cout<<"Friday";
	if(ans==6) cout<<"Saturday";
	return 0;
}
