#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum=0;
	if(n<=100000)
		sum+=n*0.1;
	else if(n>100000&&n<=400000)
		sum=10000+(n-100000)*0.05;
	else
		sum=10000+15000+(n-400000)*0.03;
	printf("%0.1lf",sum);		
	return 0;
}
