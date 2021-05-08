#include <iostream>
using namespace std;
int main()
{
	int a,b,c,day=0,max=8;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		c=a+b;
	
		if(c>max){
			max=c;
			day=i;
		}
	}
	cout<<day;
	return 0;
}
