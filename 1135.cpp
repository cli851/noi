#include <iostream>
using namespace std;

int main(int argc,char** argv){
 	char s[260]={0};
 	cin>>s;
 	for(int i=0;s[i]!=0;i++){
 		switch(s[i]){
 			case 'A':cout<<'T';break;
 			case 'T':cout<<'A';break;
 			case 'C':cout<<'G';break;
 			case 'G':cout<<'C';
		 }
	 }
	return 0;
}
