#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int sum(0),v[1002]={0};
    for(int i=1;i<=n;i++){
        cin>>x;
        if(v[x])  //���������Ѿ����ֹ��ˣ���ô����
            continue;
        v[x]++;  //���û�г��֣������ݷ���Ͱ�����������++
        sum++;
    }
    cout<<sum<<endl;
    for(int i=1;i<=1000;i++)
        if(v[i])
            cout<<i<<' ';
    cout<<endl;
    return 0;
}
