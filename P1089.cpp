#include "iostream"
using namespace std;
int main()
{
    int num[12];
    for(int i=0;i<12;i++)
    {
        cin>>num[i];
    }
    int money=300;
    int store=0;
    int flag=true;
    for(int i=0;i<12;i++)
    {
        if(money-num[i]>=0)
        {
            store+=(money-num[i])/100*100;
            money=money-(money-num[i])/100*100-num[i]+300;
            //cout<<store<<" "<<money<<endl;
        }else{
            cout<<"-"<<i+1;
            flag=false;
            break;//����break��WA����Ϊ������������·�����в���֧����������������·�
        }
    }
    if(flag)
        cout<<store+store*0.2+money%300;//���һ���¿���ʣ��Ǯ
    return 0;
}
