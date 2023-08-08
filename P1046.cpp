#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];//十个苹果的高度 
    int b;//手伸直能达到的最大高度
    int c=0;//摘到的苹果个数 
    for(int i=0;i<10;i++){
        cin>>a[i];//输出十个苹果高度
    }
    scanf("%d",&b);//输出手伸直能达到的最大高度
    for(int n=0;n<10;n++){
        if(a[n]<=(b+30)){
            c++;
        }        
    }
    printf("%d",c);
    return 0;
}
