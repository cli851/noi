#include <iostream>
using namespace std;
int main()
{
	int x,t;
	cin>>x;
	for(int i=1;i<x;i++){
		t=x%i;
		if(t==0) {
		cout<<i<<' ';
		}
	}	
	return 0;
}
