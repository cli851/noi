#include <iostream>
using namespace std;
int main()
{
	int a[9];
	for(int i=0;i<9;i++){
		cin>>a[i];
	}
	cout<<a[0]+a[4]+a[8]<<' '<<a[2]+a[4]+a[6];
	return 0;
}
