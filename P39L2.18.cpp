#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	 
	int a;
	cin>>a;//234
	int bai=a/100;
	int shi=a/10%10;
	int ge=a%10;
	cout<<ge*100+shi*10+bai;
	return 0;
}	
