#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	  printf("YES");
	else
	  printf("NO");
	return 0;
}
