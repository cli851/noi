#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double total=0;//×Ü¼Û¸ñ
	int n;
	for(int i=0;i<10;i++){ 
		cin>>n;
		total=total+a[i]*n;
	} 
	cout<<fixed<<setprecision(1)<<total;
	return 0;
}
