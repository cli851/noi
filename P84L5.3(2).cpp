#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[101];
	memset(a,0,sizeof(a));
	for(int i=2;i<=100;i++){
		for(int j=1;j<=100;j++){
			if(j%i==0){
				a[j]=!a[j];
			}
		}
	}
	for(int i=1;i<=100;i++){
		if(a[i]==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
