#include <iostream>
using namespace std;
int main()
{
	int a[5][5],m,n,t;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	cin>>m>>n;
	m=m-1,n=n-1;
	for(int j=0;j<5;j++){
		t=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=t;
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
