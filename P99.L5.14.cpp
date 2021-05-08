#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	//'a' 97  ...'z'...122
	char c='a';
	
	for(int i=97;i<=122;i=i+2){
		printf("%c ",i);
	}
	cout<<endl;
	for(int i=122;i>=97;i=i-2){
		printf("%c ",i);
	}
	
	return 0;
}
