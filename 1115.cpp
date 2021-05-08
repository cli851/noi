#include <iostream>
using namespace std;
int main()
{
	int n,Fmax=0,t,a[10000]={};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;//输入第i个数 
		if(t>Fmax) Fmax=t;//存储最大值 
		a[t]++;//该数对应数组下标t的元素+1 
	}
	for(int i=0;i<=Fmax;i++)//按顺序循环输出 
	cout<<a[i]<<endl;
	return 0;
}
