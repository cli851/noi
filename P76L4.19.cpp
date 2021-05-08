#include <iostream>
using namespace std;
int main()
{
	int n;
	int t=1,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		t*=i;//i!=(i-1)!*i t=t*i
		s+=t;
	}
	cout<<s%1000000;
	return 0;
}
