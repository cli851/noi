#include <iostream>
using namespace std;
int main()
{
	int n,Fmax=0,t,a[10000]={};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;//�����i���� 
		if(t>Fmax) Fmax=t;//�洢���ֵ 
		a[t]++;//������Ӧ�����±�t��Ԫ��+1 
	}
	for(int i=0;i<=Fmax;i++)//��˳��ѭ����� 
	cout<<a[i]<<endl;
	return 0;
}
