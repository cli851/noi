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
	//�����ǰԪ�ص�����һ��Ԫ�����ۼƳ��� 
		if(a[i]==a[i+1]){
			len++;	
		}
		else len=1;//���õ�ǰƽ̨����Ϊ1���ڼ�����һ��ƽ̨ 
	//�����ǰƽ̨���ȴ����ƽ̨���ȣ���ֵ 
		if(len>Max){
			Max=len;
		}
	}
	cout<<Max; 
	return 0;
}
