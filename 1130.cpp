#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char ch[100001];
	int letters[26]={0};
	int len;
	int sum=0;
	gets(ch);
	len=strlen(ch);
	for(int i=0;i<len;i++){
		letters[ch[i]-'a']++;
	}
	for(int i=0;i<len;i++){
		if(letters[ch[i]-'a']==1){
			cout<<ch[i]<<endl;
			return 0;
		}
	}
	cout<<"no"<<endl;
	return 0;
}
