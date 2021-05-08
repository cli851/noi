#include <iostream>
using namespace std;
int main()
{
	int n,cnt=0;//cnt是计数器，用于累计1的数目 
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=i;//因不能修改i,所以声明t临时存储i的值
		while(t){
			if(t%10==1) cnt++;
			t/=10;
		} 
	}
	cout<<cnt;
	return 0;
}
