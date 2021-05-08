#include <iostream>
#include <cstring>
using namespace std;
int main(){
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	char s[4][256];
	for(int i=0;i<4;i++){
		gets(s[i]);
	}
	char t[256];
	for(int i=3;i>=0;i--){
		for(int j=0;j<=i-1;j++){
			if(strcmp(s[i],s[j])<0){
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
		}
	}
	 for(int i=0;i<4;i++){
	 	cout<<s[i]<<endl;
	 }
	return 0;
}
