#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		if(s[0]>='a'&&s[0]<='z'){
			s[0]-=32;
		}
		for(int i=1;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=32;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
