#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double t,sum=0,x,y,dis;
	int p;//���� 
	for(int i=0;i<n;i++){
		cin>>x>>y>>p; 
		dis=sqrt(x*x+y*y);//ԭ�㵽�ݶ��ľ��� 
	    t=2*dis/50;
	    t=t+p*1.5;
	    sum=sum+t;
	}
		cout<<ceil(sum)<<endl;//�����֪����������������ֶ�ȡ�� 
		//cout<<int(sum)+1;
	return 0;
}
