#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, cnt=1;
	cin>>n;
	if(n==cnt) cout<<2;
	else
		for(int i=3; ; i+=2){
			int m=i-1;//int m=sqrt(i);
			bool zhishu=true;
			for(int j=3;j<=m;j+=2){
				if(i%j==0){
					zhishu=false;
					break;
				}
			}
			if(zhishu) {
				cnt++;
			}
			if(cnt==n){
				cout<<i;
				break;
			}
		}
	return 0;
}
