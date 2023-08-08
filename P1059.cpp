#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int sum(0),v[1002]={0};
    for(int i=1;i<=n;i++){
        cin>>x;
        if(v[x])  //如果这个数已经出现过了，那么跳过
            continue;
        v[x]++;  //如果没有出现，把数据放在桶里，并让总数居++
        sum++;
    }
    cout<<sum<<endl;
    for(int i=1;i<=1000;i++)
        if(v[i])
            cout<<i<<' ';
    cout<<endl;
    return 0;
}
