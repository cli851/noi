#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	int scoreMax=-1,score;
	string nameMax,name;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>score>>name;
		if(score>scoreMax){
			scoreMax=score;
			nameMax=name;
		}
	} 
	cout<<nameMax;
	return 0;
}
