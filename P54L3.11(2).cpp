#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x;
	int a=0,b=0,c=0;
	cin>>x;
	c=x/4;
	if(x%4==0){
		a=0;
		b=0;
		c=c;
	}
	else if(x%4==1){
		a=0;
		b++;
		c--;
	}
	else if(x%4==2){
		c--;
		a++;
		b=0;
	}
	else if(x%4==3){
		c--;
		b++;
		c--;
		a++;
	}
	cout<<a<<" "<<b<<" "<<c;	
	return 0;
}
