#include <iostream>
#include <cstring>
using namespace std;
int a[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m=a[1];
	int m_i=1;
	for(int i=1;i<=n;i++){
		if(a[i]>m){
			m=a[i];
			m_i=i;
		}
	}		
	cout<<m_i;
	return 0;
}
