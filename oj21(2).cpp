#include <iostream>
using namespace std;
int main()
{
	int n,a,i=0;
	cin>>n;
	while(n!=0){
		a=n%10;
		if(a%2!=0){
			i++;
		}
		n=n/10;	
	}
	cout<<i<<endl;
	return 0;
 } 
