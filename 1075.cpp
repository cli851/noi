#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int tot,n,tmp,cont=0;
	cin>>tot>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		if(tot>=tmp){
			tot=tot-tmp;
		}else{
			cont++;
		}
	}
	cout<<cont;	
	return 0;
}
