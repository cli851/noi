/*
���裺����������n��
    n*x+(n-f)*p<=m
	n<=(m+f*p)/(x+p)
���ǼѼѴ��˷ǳ����ˮ����
	n<=m/x
����
		/ m/x,m/x<=f
	n<=	|   	
		\ (m+f*p)/(x+p),m/x>f��ˮ��ȱ��Ҫ�� 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int f,m,x,p;
	scanf("%d %d %d %d",&f, &m, &x, &p);
	if(m>=x*f)		
	  printf("%d\n",(m+f*p)/(x+p));//����������������������룬���ǽض�С����ֻȡ��������	
	else
	  printf("%d\n",m/x);
	return 0;
}
