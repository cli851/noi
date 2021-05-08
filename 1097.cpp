#include <iostream>
using namespace std;
int main()
{
	int r,c,s;
	char z;
	cin>>r>>c>>z>>s;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(s||i==1||i==r||j==1||j==c){
				cout<<z;
			}else{
				cout<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
