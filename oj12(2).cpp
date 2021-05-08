#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int mid;
	if((a>=b&&a<=c)||(a>=c&&a<=b)){
		mid=a;
	}else if((b>=a&&b<=c)||(b>=c&&b<=a)){
		mid=b;
	}else {
		mid=c;
	}
		cout<<mid;
	return 0;
}
