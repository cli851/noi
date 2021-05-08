#include <iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(int x=0;x<m;x++){
				c[i][j]+=a[i][x]*b[x][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cout<<c[i][j]<<' ';
		
		}
		cout<<endl;
	}
	
	return 0;
}
