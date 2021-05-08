#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int m,n,t,cnt=0;
	cin>>m>>n;
	int a[m][n],b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
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
