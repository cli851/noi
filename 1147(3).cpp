#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	string nameMax,name;
	int scoreMax=-1,score;
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
