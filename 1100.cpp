#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	bool b=true;//��ƽ�����ǣ���������n������� 
	cin>>n;
	for(int num=1,i=0;b;num++)//���num�ĵ��� 
	{
		for(int day=1;day<=num;day++,i++){
			if(i==n){
				b=false;
				break;
			}
			sum+=num;	
		}
	}
	cout<<sum;
	return 0;
}
