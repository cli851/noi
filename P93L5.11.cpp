#include <iostream>
#include <cmath>
using namespace std;
int main()
{	int a[101][101];
	//1
  	for(int i=1;i<=10;i++){
  		a[i][1]=1;
	}
	//2
	for(int i=2;i<=10;i++){
	  	a[i][i+1]=1;
	}
	//3
	a[2][2]=2;
	for(int i=3;i<=10;i++){
		for(int j=2;j<=i+1;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	cout<<a[1][1]<<endl;
	for(int i=2;i<=10;i++) {
		for(int j=1;j<=i+1;j++)
		cout<<a[i][j]<<" ";
	} 	
	cout<<endl;	 
	return 0;
}
