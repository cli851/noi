#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	//'a'...97    'z'...122
	for(char i='a';i<='z';i=i+2){
		cout<<i<<' ';
	}
	cout<<endl;
	
	for(char i='z';i>='a';i=i-2){
		cout<<i<<' ';
	}
	cout<<endl;
	return 0;
}

