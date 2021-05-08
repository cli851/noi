#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[101][101]	,b[101][101] ,m,n,cnt=0; 
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(a[i][j]==b[i][j]){
				cnt++;
			}
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<100.0*cnt/m/n;
	return 0;
}
