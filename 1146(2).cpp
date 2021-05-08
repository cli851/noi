#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char s1[s.size()];
	for(int i=0;i<s.size();i++){
		s1[i]=s[s.size()-1-i];
	}
	for(int i=0;i<s.size();i++){
		if(s1[i]!=s[i]){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}



//int b[n];
//	for(int i=0;i<n;i++){
//		b[i]=a[n-1-i];
//	}
