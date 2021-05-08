#include <iostream>
using namespace std;
int main(){
	int k,flag=1,cnt=1;
	char str[2505]={0};
	cin>>k;
	cin>>str;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==str[i+1]){
			cnt++;
		}else{
			if(cnt>=k){
				flag=0;
				cout<<str[i];
				break;
			}
			cnt=1;
		}
	}
	if(flag){
		cout<<"NO";
	}
	return 0;
}
