#include <iostream>
using namespace std;
int main()
{
	int a[101][101]={{1,2,3,3,2,1},{1,2,3,3,2,1},{1,2,3,3,2,1},{1,2,3,3,2,1},{1,2,3,3,2,1},{1,2,3,3,2,1}};
	
	for(int i=0;i<=5;i++){
		a[i][i]+=10;
	}
	int j=0;
	for(int i=5;i>=0;i--){
		a[i][j++]+=10;
	}
	for(int i=0;i<=5;i++){
		for(int k=0;k<=5;k++){
			cout<<a[i][k]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
