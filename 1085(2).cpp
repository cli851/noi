#include<iostream>
using namespace std;
int main()
{
	int i=0;
	double s;
	cin>>s;
	double sum=s;
	double h=s;
	while(i<9){
		sum+=s;
		s=s/2;
		i++;
	}
	cout<<sum<<endl;
		

	int j=0;
	while(j<=9){
		h=h*1.0/2;
		j++;
	}cout<<h<<endl;
	return 0;
}


