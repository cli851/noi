#include <iostream>
using namespace std;
int main()
{	
	int x;
	cin>>x;
	int i=0;
	while(i<x-1){
		i++;
		if(x%i==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
