#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
/*
1.��Сд��ת
2.����洢 
3.ѭ������ 
isupper(x)
islower(x)
*/

int main(int argc,char** argv){
	char s[55]={0};
	char s2[55]={0};
	cin>>s;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(isupper(s[i])){
			s[i]=s[i]+32;
			//ѭ������
			s[i]=(s[i]-'a'+3)%26+'a';
		}else{
			s[i]=s[i]-32;
			s[i]=(s[i]-'A'+3)%26+'A';
		}
		s2[len-i-1]=s[i];	
	}
	cout<<s2;
	return 0;
}

