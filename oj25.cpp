#include <iostream>
using namespace std;
int main()
{
	int a,b,N;//定义三个变量，使用时再赋值 
	scanf("%d",&N);//编写输入,给N赋值 
	a=1;
	while(a<=N){//定义大循环条件 
		printf("%d",a);//大循环每次开始都先输出a,这一步跟着写完后面的回车跟a++ 
		b=1;//插入小循环此次每次大循环后进入小循环时都会重新赋值1 
	while(b<a){
		if(a%b==0){
			printf("%d",b);
		}
		b++;//b+1之后再进行下一次小循环 
	}
	printf("\n");//大循环的换行，跟着前面 的一起写完 
	a++;
	}
	return 0;
}
