#include<bits/stdc++.h>
using namespace std;
char a[50],b[50]; //char������洢�����ַ���
int lena,lenb;
bool pd;
int main()
{
    cin>>a>>b;
    lena=strlen(a);
    lenb=strlen(b);//strlen��������char������ĳ���
    //��Ϊ��֪������˭��˭���Ӵ��������Ҫ�Ա�����
    for(int i=0;i<lenb;i++)
    {
        pd=true;
        for(int j=i;j<lena+i;j++) if(a[j-i]!=b[j]) pd=false;
        //�Ա�ÿһλ
        if(pd)//a��b���г��֣���a��b���Ӵ�
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
    //��������ǶԷ����Ӵ�
    return 0;
}
