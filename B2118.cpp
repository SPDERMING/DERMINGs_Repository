#include<bits/stdc++.h>
using namespace std;
char a[50],b[50]; //char型数组存储两个字符串
int lena,lenb;
bool pd;
int main()
{
    cin>>a>>b;
    lena=strlen(a);
    lenb=strlen(b);//strlen函数返回char型数组的长度
    //因为不知道到底谁是谁的子串，因此需要对比两次
    for(int i=0;i<lenb;i++)
    {
        pd=true;
        for(int j=i;j<lena+i;j++) if(a[j-i]!=b[j]) pd=false;
        //对比每一位
        if(pd)//a在b中有出现，即a是b的子串
        {
            cout<<a<<" is substring of "<<b;
            return 0;
        }
    }
    for(int i=0;i<lena;i++)
    {
        pd=true;
        for(int j=i;j<lenb+i;j++) if(b[j-i]!=a[j]) pd=false;
        if(pd)
        {
            cout<<b<<" is substring of "<<a;
            return 0;
        }
    }
    if(!pd) cout<<"No substring";
    //如果都不是对方的子串
    return 0;
}
