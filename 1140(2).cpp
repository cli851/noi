#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char s1[200],s2[200];
	gets(s1);
	gets(s2);
	if(strstr(s1,s2)){
		cout<<s2<<' '<<"is substring of"<<' '<<s1<<endl;
		return 0;
	}
	if(strstr(s2,s1)){
		cout<<s1<<' '<<"is substring of"<<' '<<s2<<endl;
		return 0;
	}
	cout<<"No substring";
    
	return 0;
} 
