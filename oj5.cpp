#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{	 
	
	// ���ö�Ԫһ�η��������
	// �輦Ϊx����Ϊy
	// x+y=s
	// 2x+4y=80
	// x=s-y
	// 2(s-y)+4y=80
	// 2s+2y=80
	// y=(80-2s)/2
	// x=s-y

	int s; cin >> s;
    int x, y;
    y = (80 - 2 * s) / 2;
    x = s - y;
    cout << x << " " << y << endl;
    return 0;
}

