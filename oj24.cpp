#include <iostream>
using namespace std;
int main()
{{	
    int f,m,x,p,i;//fˮ���ĸ�����m������Ǯ����x���ӵ����pˮ���ļ۸�i����������� 
	scanf("%d%d%d%d",&f,&m,&x,&p);
	for(i=0;m>x;i++){
		if(f>0){//���ˮ����������0ÿ��ֻ�ü�ȥ���ӵ���� 
			f--;
			m-=x;
		}else{
			m-=(x+p);//���ˮ������С��0ÿ����˸����Ҫ��ȥˮ��Ǯ 
		}
		if(m<0){
			break;
		}
	
	}
	
	printf("%d",i);	
	return 0;
}}
