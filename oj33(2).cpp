#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	int max=INT_MIN;
	int a[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			int tmp;
			cin>>tmp;
			if(tmp<0){
				tmp=-tmp;
			}
			a[i][j]=tmp;
			if(a[i][j]>max){
				max=a[i][j];
			}	
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(a[i][j]==max){
				cout<<a[i][j]<<' '<<i+1<<' '<<j+1;
				return 0;
			}
		}
	}
	return 0;	
} 
