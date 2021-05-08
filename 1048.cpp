#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int y,s; 
	scanf("%d%d",&y,&s);
	if(y<60&&s>=60){
		cout<<1;
	}else if(y>=60&&s<60){
		cout<<1;
	}else{
		cout<<0;
	}	
	return 0;
}
