#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s1[200],s2[200];
 
    gets(s1);//获取字符串s1
    gets(s2);//获取字符串s2
 
    if(strstr(s2,s1))//判断s1是否是s2的子串
    {
        cout<<s1<<" is substring of "<<s2<<endl;
        return 0;
    }
    if(strstr(s1,s2))//判断s2是否是s1的子串
    {
        cout<<s2<<" is substring of "<<s1<<endl;
        return 0;
    }
    cout<<"No substring"<<endl;
    return 0;
} 
