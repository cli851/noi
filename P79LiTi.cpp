#include <iostream>
using namespace std;
int main()
{
	double a[5];//0 - 4
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	double sum=0;
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	double avg=sum/5;
	for(int i=0;i<5;i++){
		if(a[i]<avg){
			cout<<i<<" "<<a[i]<<endl;
		}
	}
	return 0;
}
