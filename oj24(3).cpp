#include <iostream>
using namespace std;
int main()
{
	int f,m,x,p,j;
	cin>>f>>m>>x>>p;
	for(j=0;m>x;j++){
		if(f>0){
			f--;
			m=m-x;
		}else{
			m=m-(x+p);
		}
		if(m<0){
			break;
		}
	}
	cout<<j;
	return 0;
}
