#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		if (i%7==0){
		sum=sum+i;
		}
	}
	cout<<sum;	
	return 0;
}
