#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	bool b=true;//设计结束标记，如果到达第n天则结束 
	cin>>n;
	for(int num=1,i=0;b;num++)//金币num的递增 
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
