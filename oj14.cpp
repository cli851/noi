#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}	
	return 0;
}
