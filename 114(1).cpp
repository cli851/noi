#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[1000];
    int len,position;
    int sum=0;
    
    gets(s);//获取字符串s
    len=strlen(s);//求字符串长度
    s[len]=' ';//末尾加一空格方便计算
 
    for(int i=0; i<=len; i++){
        if(s[i]!=' '){
            sum++;//计算单词长度
        }else{
			position=i;//记录单词末位置
            for(int j=1; j<=sum; j++) //倒序输出
                cout<<s[--position];
            sum=0;//计数器归零
            if(i!=len)//若不是自己加上的空格就输出空格
                cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
