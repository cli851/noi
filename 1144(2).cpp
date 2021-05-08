#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char s[1000];
	int len,position;
	int sum=0;
	gets(s);
	s[len]=' ';
	for(int i=0;i<=len;i++){
		if(s[i]!=' '){
		sum++
		}else{
			position=i;
			for(int j=1;j<=sum;j++){
				cout<<s[--position];
				sum=0;
				if(i!=len){
				cout<<" ";
				}
			}
		}
		
	}
	cout<<endl;
	return 0;
}
