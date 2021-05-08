#include <iostream>
using namespace std;
int main()
{
	int a,b;
	a=7;
	b=8;
	int z1=b-(a++);
	int z2=b-(++a);
	cout<<z1<<" "<<z2<<" "<<a;
	return 0;      
}   
