#include <iostream>
using namespace std;
int main()
{
	int m,n,gcd;
	cin>>m>>n;
	gcd=m>n? n:m; 
	while(gcd>1&&(m%gcd!=0||n%gcd!=0))
	gcd--;//每次减1寻找最大公约数 
	cout<<gcd<<endl;
	return 0;
}

