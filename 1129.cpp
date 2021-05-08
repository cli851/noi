#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	char s[255]={0}; 
	//string s;
	int cont=0;
	gets(s); 
	//getline(cin,s);//读入一行，包括空格
	//cout<<s<<endl;
	
	for(int i=0;s[i]!=0;i++){
		//cout<<s[i];
		if(s[i]>=48&&s[i]<=57){
			cont++;
		}	
	}
	cout<<cont;
	
//	for(int i=0;i<s.size();i++) {
//		if(s[i]>='0'&&s[i]<='9'){
//			cont++;
//		} 
//	}
//	cout<<cont;
	return 0;	
}
