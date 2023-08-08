#include <bits/stdc++.h>
using namespace std;
int n,m,a[100001],ans,k;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
	int i=1;
	while(i<=n)
{
		while(a[i]<=a[i-1]&&i<=n) i++;
		while(a[i]>=a[i-1]&&i<=n) i++;
		ans++;
	}
	printf("%d",ans-2);
    return 0;
}
