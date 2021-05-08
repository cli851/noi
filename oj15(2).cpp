/*
假设：最多在外面待n天
    n*x+(n-f)*p<=m
	n<=(m+f*p)/(x+p)
但是佳佳带了非常多的水果呢
	n<=m/x
所以
		/ m/x,m/x<=f
	n<=	|   	
		\ (m+f*p)/(x+p),m/x>f（水果缺，要买） 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int f,m,x,p;
	scanf("%d %d %d %d",&f, &m, &x, &p);
	if(m>=x*f)		
	  printf("%d\n",(m+f*p)/(x+p));//两个整型相除不是四舍五入，而是截断小数，只取整数部分	
	else
	  printf("%d\n",m/x);
	return 0;
}
