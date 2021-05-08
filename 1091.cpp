/*#include <iostream>
using namespace std;
int main()
{
	int n,fac,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		fac=1;
		for(int j=1;j<=i;j++)
			fac=fac*j;
			sum+=fac;
	}
	cout<<sum;	
	return 0 ;
}*/

#include <iostream>
using namespace std;
int main()
{
	int n,fac=1,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		fac*=i;
		sum=sum+fac;//sum+=fac;
	}
	cout<<sum;
	return 0;
}

