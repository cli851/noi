#include <iostream>
using namespace std;
int main()
{
	int f,m,x,p,i;
	cin>>f>>m>>x>>p;
	for(i=0;m>x;i++){
		if(f>0){
			f--; 
			m=m-x;
		}else{
			m=m-(x+p);
		}if(m<0){
			break;
		}
	}
	cout<<i;
	return 0;
}
