#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	int tmp,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(tmp==m){
			sum++;
		}	
	}
	    cout<<sum;
	return 0;
}
