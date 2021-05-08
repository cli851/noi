#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a;
	short b;
	int size_int=sizeof(a);
	int size_short=sizeof(b);
	cout<<size_int<<" "<<size_short;
	return 0;
}
