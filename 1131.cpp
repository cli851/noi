#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int n;
	cin>>n;
	
	while(n--){
		cin>>s1>>s2;
		if(s1=="Rock"){
			if(s2=="Rock") cout<<"Tie"<<endl;
			if(s2=="Scissors") cout<<"Player1"<<endl;
			if(s2=="Paper") cout<<"Player2"<<endl;
		}
		if(s1=="Scissors"){
			if(s2=="Rock") cout<<"Player2"<<endl;
			if(s2=="Scissors") cout<<"Tie"<<endl;
			if(s2=="Paper") cout<<"Player1"<<endl;
		}
		if(s1=="Paper"){
			if(s2=="Rock") cout<<"Player1"<<endl;
			if(s2=="Scissors") cout<<"Player2"<<endl;
			if(s2=="Paper") cout<<"Tie"<<endl;
		}	
		
	}	
	
	return 0;
}
