#include <iostream>
using namespace std;
int main()
{
	int i=0;
	float s=0;
	while(s<1.5){
		++i;
		s+=1.0/i;
	}
	cout<<i;
	return 0;
}
