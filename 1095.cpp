#include <iostream>
using namespace std;
int main()
{
	int n,cnt=0;//cnt�Ǽ������������ۼ�1����Ŀ 
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=i;//�����޸�i,��������t��ʱ�洢i��ֵ
		while(t){
			if(t%10==1) cnt++;
			t/=10;
		} 
	}
	cout<<cnt;
	return 0;
}
