#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	int m,n,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i%17==0){
			sum+=i;
		}
	}
	cout<<sum;
	return 0;	
}
