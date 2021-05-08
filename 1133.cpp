#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size()-1;i++){//遍历到倒数第二个 
		cout<<char(s[i]+s[i+1]); 
	}
	cout<<char(s[0]+s[s.size()-1]);
	return 0;
} 
