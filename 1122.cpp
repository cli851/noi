#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int rowMax=-1000000;
			for(int k=0;k<5;k++){
				if(a[i][k]>rowMax){
					rowMax=a[i][k];
				}	
			}	
			int colMin=1000000;
			for(int l=0;l<5;l++){
				if(a[l][j]<colMin){
					colMin=a[l][j];	
				}
			}
			if(a[i][j]==rowMax
				&&a[i][j]==colMin){
				cout<<i+1<<" "<<j+1<<" "<<a[i][j];
				return 0;
			}		
		}
	}	
	cout<<'not found';		 
	return 0;
}
