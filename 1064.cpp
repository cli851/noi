#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,j,y,t;
	int sumGold=0,sumSilver=0,sumBronze=0,sumMedal;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>j>>y>>t;
		sumGold+=j;
		sumSilver+=y;
		sumBronze+=t;
	}
	sumMedal=sumGold+sumSilver+sumBronze;
	cout<<sumGold<<" "<<sumSilver<<" "<<sumBronze<<" "<<sumMedal;	
	return 0; 
}
