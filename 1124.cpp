#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[100][100],b[100][100],m,n; 
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]+b[i][j]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
