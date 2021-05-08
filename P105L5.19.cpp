#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	char s1[256],s1_1[256];
	char s2[256],s2_2[256];
	memset(s1_1,0,sizeof(s1_1));
	memset(s2_2,0,sizeof(s2_2));
	gets(s1);
	gets(s2);
	int j=0;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]!=' '){
			s1_1[j++];
		}
	}
	//s1_1[j]	=0;
	int k=0;
	for(int i=0;i<strlen(s2);i++){
		if(s2[i]!=' '){
			s2_2[k++];
		}
	}
	if(strcmp(strupr(s1_1),strupr(s2_2))==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

