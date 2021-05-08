#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int k; char n;
	cin>>k; scanf("%c",n);
	if(k%3==0&&k%5==0&&k%7==0){
		cout<<3<<" "<<5<<" "<<7;
	}
	if(k%3==0&&k%5==0&&k%7!=0){
		cout<<3<<" "<<5;
	}		
	if(k%3==0&&k%7==0&&k%5!=0){
		cout<<3<<" "<<7;
	}
	if(k%3!=0&&k%5==0&&k%7==0){
		cout<<5<<" "<<7;
	}
	if(k%3==0&&k%5!=0&&k%7!=0){
		cout<<3;
	}
	if(k%3!=0&&k%5==0&&k%7!=0){
		cout<<5;
	}if(k%3!=0&&k%5!=0&&k%7==0){
		cout<<7;
	}
	if(k%3!=0&&k%5!=0&&k%7!=0){
		cout<<"n";
	}
	return 0;
}
