#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int sum_ji=0,sum_ou=0;
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)//ÊÇÅ¼Êý
	{
		sum_ou +=i;//sum_ou=sum_ou+i;
	} 
	else
	{
		sum_ji +=i;
	}
	}
	cout<<sum_ji<<" "<<sum_ou;
	return 0;
}
