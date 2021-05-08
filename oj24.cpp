#include <iostream>
using namespace std;
int main()
{{	
    int f,m,x,p,i;//f水果的个数，m所带的钱数，x房子的租金，p水果的价格，i在外面的天数 
	scanf("%d%d%d%d",&f,&m,&x,&p);
	for(i=0;m>x;i++){
		if(f>0){//如果水果个数大于0每天只用减去房子的租金 
			f--;
			m-=x;
		}else{
			m-=(x+p);//如果水果个数小于0每天除了给租金还要减去水果钱 
		}
		if(m<0){
			break;
		}
	
	}
	
	printf("%d",i);	
	return 0;
}}
