#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n,j,y,t,sumGold=0,sumSilver=0,sumBronze=0,Medal;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>j>>y>>t;
		sumGold+=j;
		sumSilver+=y;
		sumBronze+=t;
	}
	Medal=sumGold+sumSilver+sumBronze;
	cout<<sumGold<<" "<<sumSilver<<" "<<sumBronze<<" "<<Medal;
	return 0;
}
