#include <iostream>
using namespace std;
int main()
{
	int L,R,cnt=0;
	cin>>L>>R;
	for(int i=L;i<=R;i++){
		int t=i;
		while(t){
			if(t%10==2) cnt++;
			t/=10;
		}
	}
	cout<<cnt; 
	return 0;
}
