#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		bool b=true;
		if(i%7==0){
			b=false;
		}else{
			int t=i;
			while(t!=0){
				if(t%10==7){
					b=false;
					break;
				}
				t=t/10;
			}
		}
		if(b) sum=sum+i*i;
	}
	cout<<sum;
	return 0;
}
