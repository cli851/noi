#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size()-1;i++){//�����������ڶ��� 
		cout<<char(s[i]+s[i+1]); 
	}
	cout<<char(s[0]+s[s.size()-1]);
	return 0;
} 
