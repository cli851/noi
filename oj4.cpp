#include <iostream>
#include<cstdio> 
using namespace std; 
int main() 
{ 
	//int a,n,c=0;
	//float b;
	//scanf("%d%f%d",&a,&b,&n);
	//a=a*10000;
	//c=a/n+a*b;
	//printf("%d\n",c);
	//return 0; 


	int y=0,x,m;
    float a;
    scanf("%d%f%d",&x,&a,&m);
    x=x*10000;
    y=x/m+x*a;
    printf("%d\n",y);
    return 0;
}
