#include <iostream>
using namespace std;
int main()
{
	int a[10],tt,cnt=0;
	for(int i=0;i<10;i++)
	
		cin>>a[i];
		cin>>tt;
		tt+=30;
	
	for(int i=0;i<10;i++)
		if(tt>=a[i])
		cnt++;
	
	cout<<cnt;
	return 0;
}
