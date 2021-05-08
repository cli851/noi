#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	int scoreMax=-1,score;
	char nameMax[25]={0},name[25]={0}; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>score>>name;
		if(score>scoreMax){
			scoreMax=score;
			strcpy(nameMax,name);
		}
	}
	cout<<nameMax;
	return 0;
}
