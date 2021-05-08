#include <iostream>
using namespace std;
int main()
{
	int x,y,z;//x 5  y 3  z 1/3;
	for(x=0;x<=100/5;x++){
		for(y=0;y<=100/3;y++){
			for(z=0;z<=100*3;z++){
				if(x+y+z==100&&5*x+3*y+z/3==100&&z%3==0){
					cout<<x<<" "<<y<<" "<<z<<endl;
				}
				
			}
		}
	}
	return 0;
}
