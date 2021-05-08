#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	bool f;
	cin>>a>>b;
	f=true;
	if(f&&a>5){
		if(b*3<=18)
	        cout<<(a%b<3)<<endl;
	    else
	        cout<<(a+b>20)<<endl;		
	}else{
		if(a>2)
	        cout<<(a==3)<<endl;
	    else
	        cout<<(a==2)<<endl;	
	}
	 return 0;
}
