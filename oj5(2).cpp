#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	
	// 利用二元一次方程组求解
	// 设鸡为x，兔为y
	// x+y=s
	// 2x+4y=80
	// x=s-y
	// 2(s-y)+4y=80
	// 2s+2y=80
	// y=(80-2s)/2
	// x=s-y

	int s;
	cin>>s;
	int j,t;
	j=(4*s-80)/2;
	t=s-j;
	cout<<j<<" "<<t<<endl;
    return 0;
}

