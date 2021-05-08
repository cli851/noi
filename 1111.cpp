#include <iostream>
using namespace std;
int main()
{
	int a,b,c,Max=8,day=0;
	 for(int i=1;i<=7;i++){
	 	cin>>a>>b;
	 	c=a+b;
	 	if(c>Max){
			day=i;//更新最大值所在的那一天 
	 		Max=c;//更新最大值 
	 	}
	}
	cout<<day;
	return 0;
}
