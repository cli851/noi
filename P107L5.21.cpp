#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	int n,lunwen[100],score1[100],score2[100];
	char name[100][100],g[100],x[100];
	int j[100]={0};
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>name[i]>>score1[i]>>score2[i]>>g[i]>>x[i]>>lunwen[i];
	if(score1>80&&lunwen>=1){
		j[i]+=8000;
	}
	if(score1[i]>85&&score2[i]>80){
		j[i]+=4000;
	}
	if(score1[i]>90){
		j[i]+=2000;
	}
	if(score1[i]>85&&x[i]=='Y'){
		j[i]+=1000;
	}
	if(score2[i]>80&&g[i]=='Y'){
		j[i]+=850;
	}
	
	}
	for(int i=n-1;i>=0;i--){
		for(int k=0;k<=i-1;k++){
			if(j[k])<j[k+1]{
			int t=j[k];
			j[k]=j[k+1];
			j[k+1]=t;
			char ns[250];
			strcpy(ns,name[k]);
			strcpy(name[k],name[k+1]);
			strcpy(name[k+1],ns);
			}
		}
	}
	cout<<name[0]<<endl;
	cout<<j[0]<<endl;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=j[i];
	}
	cout<<sum;
	return 0;
}
