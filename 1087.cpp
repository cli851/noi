#include<iostream>
using namespace std;
int main()
{
    int k,n=1;
    float sum=1;
    cin>>k;
    while(sum<=k)
	{
        n++;
        sum+=1.0/n;
    }
    cout<<n<<endl;
    return 0;
}

