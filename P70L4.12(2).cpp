/*#include <iostream>
using namespace std;
int main()
{  int t,sum=0;
	for(int i=1;i<=10;i++){
		t=1;
		for(int j=1;j<=i;j++){
			t*=j;
		}
		sum+=t;
	}
	cout<<sum;
	return 0; 
}*/

#include <iostream>
using namespace std;
int main()
{
	int t=1,sum=0;
	for(int i=1;i<=10;i++){
		t*=i;
		sum+=t;
	}
	cout<<sum;
	return 0;
}
