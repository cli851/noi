#include <iostream>
using namespace std;
int main()
{
	int x,i=0;
	int a[100];
	while(scanf("%d",&x) !=EOF){
		a[i]=x;
		i++;
	}
	//i¸ö0 - i-1 
	for(int j=i-1;j>=0;j--){
		cout<<a[j]<<" ";
	}
	return 0;
}
