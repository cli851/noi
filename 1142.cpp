#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char s[1000];
	int len;
	int sum=0;
	gets(s);
	len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]!=' '){
			sum++;
		}else{
			if(sum>0){
				cout<<sum<<",";
				sum=0;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
