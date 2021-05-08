#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
	//嵌套处理重复值
	    for(int j=i+1;j<=n;j++){
	    	if(a[i]==a[j]){
	    		a[j]=0;
			}
		}	
	for(int i=1;i<=n;i++){
		if(a[i]) cout<<a[i]<<" ";
		}  
	}
	return 0;
}
