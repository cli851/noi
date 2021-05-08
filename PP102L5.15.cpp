#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	char s[256];
	char A,B;
	memset(s,0,sizeof(s));
	gets(s);
	//cout<<strlen(s);
	cin>>A>>B;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==A){
			s[i]=B;
		}
	}
	cout<<s;
	return 0;
}

