#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long s=1;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s*=i;
	}
	printf("%lld\n",s);
	return 0;
}
