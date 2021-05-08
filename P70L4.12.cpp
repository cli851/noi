#include <iostream>
using namespace std;
int main()
{	int t=1,s=0;
	//s=1!+2!+3!+...+10!
	for(int i=1;i<=10;i++){
		//求i的阶乘1*..*i
		t=1;
		for(int j=1;j<=i;j++){
			t=t*j;
		} 
		s=s+t;//s+=t;
	}
	cout<<s;
	return 0;
}
	/*#include <iostream>
	using namespace std;
	int main()
{
	int t=1,s=0;
	for(int i=1;i<=10;++i){
		t*=i;//t为上一个数的i-1的阶乘值，再乘以i即为i! 
		s+=t;//累加i! 
	}
	cout<<s;
	return 0;
}*/
