#include <iostream>
using namespace std;
int main()
{
	int a[10001]={0},L,M,start,end,cnt=0;
	cin>>L>>M;
	for(int i=1;i<=M;i++){
		cin>>start>>end;
		while(start<=end){
			a[start]=1;
			start++;
		}
	}
	for(int i=0;i<=L;i++){
		if(a[i]==0){
			cnt++;
		}
	}
		cout<<cnt;
	return 0;
 } 
