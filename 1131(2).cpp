#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	string s1,s2;
	int cont=0;
	float ratio;
	cin>>ratio;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==s2[i]){
			cont++;
		}
	}
	if(cont*1.0/s1.size()>=ratio){
		cout<<"yes";	
	}else{
		cout<<"no";
	}
	return 0;	
}
