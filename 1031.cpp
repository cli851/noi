#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	int n;
	cin>>n;
	int bai=n/100;
	int shi=n/10%10;
	int ge=n%10;
	cout<<ge<<shi<<bai;	
	return 0;
} 	
