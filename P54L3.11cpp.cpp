#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	//a 6,b 5,c 4
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
		c--;
		b++;
		a=0;
	}
	else if(x%4==2){
		c--;
		a++;
		b=0;
	}
	else if(x%4==3){
		c--;
		b++;//7-5=2
		c--;//2+4=6
		a++;
	}
	    cout<<a<<" "<<b<<" "<<c;			
	return 0;
}
