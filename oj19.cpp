#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n,Sn=0,a=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        a = a * 10 + 2;
        Sn = Sn + a;
    }
    printf("%d\n",Sn);

	return 0;
}
