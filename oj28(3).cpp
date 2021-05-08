#include <iostream>
using namespace std;
int main()
{
	int a[9];
	int b[10];
	int element;
	int position=0;
	for(int i=0;i<9;i++){
		cin>>a[i];
	}
	cin>>element;
	for(int i=0;i<9;i++){
		if(a[i]>=element){
			position=i;
			break;	
		}
	}
	for(int i=0;i<position;i++){
		b[i]=a[i];
	}
	b[position]=element;
	for(int i=position+1;i<10;i++){
		b[i]=a[i-1];
	}
	for(int i=0;i<10;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
