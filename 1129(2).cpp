#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int cont=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>=48&&s[i]<=57){
			cont++;
		}
	}
	cout<<cont;
	return 0;	
}
