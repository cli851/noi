#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int x=2;x<=1000000;x++){
		if(a%x==b%x&&b%x==c%x){
			cout<<x;
			break;
		}	
	}
	return 0;
}
