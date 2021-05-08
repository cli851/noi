#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int i,j,sum1=0,sum2=0;
	for(i=2,j=1;i<=100;i+=2,j+=2)
	{
		sum1+=j;
		sum2+=i;
	}
	cout<<sum1<<" "<<sum2;
	return 0;
} 
