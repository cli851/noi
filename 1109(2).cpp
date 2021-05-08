#include <iostream>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int a[N+1]={0};
	for(int i=2;i<=M;i++){
		for(int j=1;j<=N;j++){
			if(j%i==0){
				if(a[j]==0){
					a[j]=1;	
				}else if(a[j]==1){
					a[j]=0;
				}
			}
		}
	}
	cout<<1;
	for(int i=2;i<=N;i++){
		if(a[i]==0){
			cout<<","<<i;
		}
	}
	return 0;
}
