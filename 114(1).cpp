#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[1000];
    int len,position;
    int sum=0;
    
    gets(s);//��ȡ�ַ���s
    len=strlen(s);//���ַ�������
    s[len]=' ';//ĩβ��һ�ո񷽱����
 
    for(int i=0; i<=len; i++){
        if(s[i]!=' '){
            sum++;//���㵥�ʳ���
        }else{
			position=i;//��¼����ĩλ��
            for(int j=1; j<=sum; j++) //�������
                cout<<s[--position];
            sum=0;//����������
            if(i!=len)//�������Լ����ϵĿո������ո�
                cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
