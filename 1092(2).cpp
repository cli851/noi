#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=3;
    //cin >> n;
    long long fac;
    double sum = 1;
    int i;
    
    i=1;
        fac = 1;
        for (int j = 1; j <= i; j++)
            fac *= j;
        sum += 1.0 /fac;
    
     i=2;
        fac = 1;
        for (int j = 1; j <= i; j++)
            fac *= j;
        sum += 1.0 /fac;
        
     i=3;
        fac = 1;
        for (int j = 1; j <= i; j++){
        	fac *= j;
		}    
        sum += 1.0 /fac;
    cout << fixed << setprecision(10) << sum;
    return 0;
}
