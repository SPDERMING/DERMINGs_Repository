#include<bits/stdc++.h>
using namespace std;
double x[10000];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cin >> x[i];
    }
    sort(x+1,x+1+n);
    double sum=0;
    for (int i = 2; i <n; i++)
    {
        sum+=x[i];
    }
    double ave =sum / (double)(n - 2);
    double maxx=-1;
    for (int i = 2; i <n; i++)
    {
        maxx=max(maxx,fabs(x[i]-ave));
    }
    printf("%.2f %.2f",ave,maxx);
    return 0;
}
