#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[4]={0},age,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>age;//ÊäÈëÄêÁä
		if(age<=18){
			a[0]++;
		}else if(age>=19&&age<=35){
			a[1]++;
		}else if(age>=36&&age<=60){
			a[2]++;
		}else a[3]++;
	}
	for(int i=0;i<4;i++){
		cout<<fixed<<setprecision(2);
		cout<<a[i]*100.0/n<<"%"<<endl;
	}		
	return 0;
}
