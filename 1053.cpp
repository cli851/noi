#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float a,b,c,maxn;
	cin>>a>>b>>c;
	if(a>b&&a>c){
	maxn=a;
	}
	else if(b>a&&b>c){
	maxn=b;
	}
	else maxn=c;
	cout<<maxn<<endl;
	return 0;
}
