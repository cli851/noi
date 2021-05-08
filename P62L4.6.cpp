#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int g=m>n?n:m;
		while(g>1){
		if(m%g==0&&n%g==0){
			break;
		}
		g--;
	}
		cout<<g;		
	return 0;
}
