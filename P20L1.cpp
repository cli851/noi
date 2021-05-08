#include <iostream>
using namespace std;
int main()
{
	int n1=4,n2=5,n3;
	n3=(n1>=n2 && n1!=n2);
	n3=(n1<=n2 || n1!=n2);
	n3=!(n1==n2);
	n3=n1!=n2;
	cout<<n3;
	return 0;
}
