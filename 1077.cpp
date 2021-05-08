#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	 int n,num,cont=0;
	 cin>>n;
	 for(int i=0;i<n;i++){
		cin>>num;
		if(num%10-num/1000-num/100%10-num%100/10>0){
		cont++;
		}
	}
	cout<<cont; 	
	return 0;
}
