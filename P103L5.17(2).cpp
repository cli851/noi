#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[256];
	memset(s,0,sizeof(s));
	gets(s);
	for(int i=0;i<strlen(s);i++){
		cout<<s[i];
	}
	return 0;
}
