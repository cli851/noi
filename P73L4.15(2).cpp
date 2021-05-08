#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	for(int m=100;m<=999;++m){
		int a=m/100;
		int b=(m%100)/10;
		int c=m%10;
		if(a*a*a*+b*b*b+c*c*c==m)
	    	cout<<setw(6)<<m;
	}
	return 0;
}
