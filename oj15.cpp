#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int f,m,x,p;
	cin>>f>>m>>x>>p;
	if(m>=f*x){
		printf("%d\n",(m+f*p)/(x+p));
	}
		else  
		printf("%d\n",m/x);	
	return 0;
}
