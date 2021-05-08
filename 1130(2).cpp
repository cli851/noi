#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	string s;
	int flag=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		flag=0;
		for(int j=0;j<s.size();j++){
			if(s[i]==s[j]&&i!=j){
				flag=1;
				break;
			}
		}
		if(!flag){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
