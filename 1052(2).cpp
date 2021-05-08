#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,h;
	char c;
	cin>>n>>c;
	if(n<=1000&&c=='y'){
		cout<<13;
	}
	else if(n<=1000&&c=='n'){
	     cout<<8;
	}
	if(n>1000&&c=='y'){
		int a=n-1000;
		int h;
		if(a%500!=0){
			h=a/500+1;
		}
		if(a%500==0){
			h=a/500;
		}	
			cout<<13+4*h;
	}	
	    if(n>1000&&c=='n'){
			cout<<8+4*h;
		}
	return 0;
}
