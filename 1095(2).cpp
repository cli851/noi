#include <iostream>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=i;//ΪɶҪѡt=i; 
		while(t){
			if(t%10==1) cnt++;
			t/=10;
		}
	}
	cout<<cnt;
	return 0;
}
