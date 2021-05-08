#include <iostream>
using namespace std;
int main()
{	
	int n,a,sum=0;
	cin>>n;
	while(n!=0){
		a=n%10;
		if(a%2!=0){
			sum++;
		}
		n=n/10;
	}
	cout<<sum<<endl;
	return 0;
}
