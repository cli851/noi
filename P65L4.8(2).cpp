#include <iostream>
#include <cstdio>
#define INF 100000000
using namespace std;
int main()
{
	int x,n=0,min=INF,max=-INF,s=0;
	while(scanf("%d",&x)==1){
	//scanf("%d",&x)!=EOF,���û�����ݿɶ���scanf����EOF 
	s+=x;
	min=x<min? x:min;
	max=x>max? x:max;
	++n;
	}
	printf("%d %d %.3lf\n",min,max,(double)s/n);
	return 0;
}
