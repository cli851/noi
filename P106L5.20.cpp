#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	char s1[256],s2[256];
	cin>>s1>>s2;
	char st[256];
	
	if(strlen(s1)<strlen(s2)){
		strcpy(st,s1); 
		strcpy(s1,s2);
		strcpy(s2,st);
	}
	char x[256];
	strcpy(x,s1);
	strcat(s1, x);
		if(strstr(s1,s2)==NULL){
			cout<<"false";
		}else{
			cout<<"true";
		}
	
	return 0;
}
