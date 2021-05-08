#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
int main()
{
	char a[80]={0};
	gets(a);
	for(int i=0;a[i]!=0;i++){
		if(a[i]==122||a[i]==90){
			a[i]=a[i]-25;
		}else{
			if((a[i]>=65&&a[i]<90)
			||(a[i]>=97&&a[i]<122))
			a[i]=a[i]+1;
		}
	}
	for(int i=0;a[i]!=0;i++){
		cout<<a[i];
	}
	return 0;
}

