#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1){
		cout<<"End";
		return 0;
	}
	while(n!=1){
		if(n%2!=0){
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
		if(n%2==0){
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
	}
	cout<<"End"<<endl;
	return 0;
}
