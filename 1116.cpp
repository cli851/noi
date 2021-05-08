#include <iostream>
using namespace std;
int main()
{
	int n,a[100001],Max=1,len=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
	//如果当前元素等于下一个元素则累计长度 
		if(a[i]==a[i+1]){
			len++;	
		}
		else len=1;//重置当前平台长度为1用于计算下一个平台 
	//如果当前平台长度大于最长平台长度，则赋值 
		if(len>Max){
			Max=len;
		}
	}
	cout<<Max; 
	return 0;
}
