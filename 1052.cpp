#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int result=0;
	
	if(n>1000){
		int a=n-1000;
		int h;
		if(a%500!=0){
			h=a/500+1;
		}else{
			h=a/500;
		}
		result=4*h;
	}
	
	if(c=='y'){
		result=result+13;
	}else{
		result=result+8;
	}
	cout<<result;
	return 0;
}
