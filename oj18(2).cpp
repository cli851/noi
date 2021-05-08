#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,h=0,n=10;
	double sum=0;
	for(int i=1;i<=n;i++){
		cin>>a;
			sum=sum+a;
		if(a<60){
			h=h+1;
	}	
	}
	printf("%.1f %d",sum/n,h);
	//cout<<fixed<<setprecision(2)<<sum/n<<" "<<h;
	return 0;
} 
