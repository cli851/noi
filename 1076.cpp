#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int n,s,x;
	int h=0,maxh=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s>>x;
		if(s>=90&&s<=140&&x>=60&&x<=90){
			h++;
			if(h>maxh){
				maxh=h;
			}
		}else{
			h=0;
		}
	}
	cout<<maxh;
	return 0; 
}
