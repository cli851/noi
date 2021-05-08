#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[101];
	memset(a,0,sizeof(a));
	int n,m;
	cin>>n>>m;
	int i=1;
	int k=0;
	int j=0;
	while(true){
		if(a[i]==0){
			k++;
			if(k==m){
				a[i]=1;
				cout<<i<<" ";
				j++;
				k=0;
			}
		}
		i++;
		if(i>n){
			i=1;
		}
		if(j==n){
			break;
		}
		
	}	
	return 0;
}
