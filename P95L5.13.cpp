#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int a[1000][1000];
int main()
{	
	 memset(a,0,sizeof(a));
	int n;
	cin>>n;
	int k=2;
	int i=0,j=n-1;
	a[i][j]=1;
	while(k<=n*n){
		//об 
		while(i+1<n&&a[i+1][j]==0){
			a[i+1][j]=k;
			k++;
			i++;
		}
		//zuo
		while(j-1>=0&&a[i][j-1]==0){
			a[i][j-1]=k;
			k++;
			j--;
		}
		//shang
		while(i-1>=0&&a[i-1][j]==0){
			a[i-1][j]=k;
			k++;
			i--;
		}
		//you
		while(j+1<n&&a[i][j+1]==0){
			a[i][j+1]=k;
			k++;
			j++;	
		}
	}
	for(int m=0;m<n;m++){
		for(int l=0;l<n;l++){
			cout<<a[m][l]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
