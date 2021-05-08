#include <iostream>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(i=1;i<=n;i++){
		if(a[i]==m){
			cout<<i;
			break;
		}
	}if(i==n+1){
		cout<<-1;
	}
	return 0; 
}

	
