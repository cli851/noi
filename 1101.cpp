#include <iostream>
using namespace std;
int main()
{
	int a,b,c,cont=0;
	cin>>a>>b>>c;
	for(int x=0;x<=1000;x++){
		for(int y=0;y<=1000;y++){
			if(a*x+b*y==c) cont++;
		}	
	}
	cout<<cont;
	return 0;
}
