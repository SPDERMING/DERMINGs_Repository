#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];//ʮ��ƻ���ĸ߶� 
    int b;//����ֱ�ܴﵽ�����߶�
    int c=0;//ժ����ƻ������ 
    for(int i=0;i<10;i++){
        cin>>a[i];//���ʮ��ƻ���߶�
    }
    scanf("%d",&b);//�������ֱ�ܴﵽ�����߶�
    for(int n=0;n<10;n++){
        if(a[n]<=(b+30)){
            c++;
        }        
    }
    printf("%d",c);
    return 0;
}
