#include <iostream>
using namespace std;
int main()
{	 
	int a[101][101];
	int b[10001][3];
	int n,m;
	int k=0;
	cin>>n>>m;//∂¡»Î 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	//¥¶¿Ì 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=0){
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		} 
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
