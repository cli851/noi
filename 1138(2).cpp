#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
    	if(s[i]>=97&&s[i]<=122){
    		s[i]=s[i]-32;
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}
    return 0;
}
