#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int a[101];
int main()
{
	memset(a,0,sizeof(a));
	for(int i=2;i<=sqrt(100);i++){
		if(a[i]==0){
			for(int j=2;j<=100/i;j++){
				a[i*j]=1;
			}
		}
	}
	int k=0;
	for(int i=2;i<=100;i++){
		if(a[i]==0){
			cout<<i<<" ";
			k++;
			if(k%5==0){
				cout<<endl;
			}
		}
	}
	return 0;
}  
