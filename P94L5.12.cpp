#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{	char s[256];
	//ABCBA
	char c;
	bool flag=false;
	cin>>c;
	int k=0;
	while(c!='.') {
		
		s[k++]=c;
		cin>>c;
	}
	//cout<<k;
	int i=0;
	int j=k-1;
	while(1){
		if(s[i]!=s[j]){
			break;
		}else{
			i++;
			j--;
			if(i>=j){
				flag=true;
				break; 
			}
		}
	}
	cout<<flag;
	return 0;
}
