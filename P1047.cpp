#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int l;
	int n;
	cin>>l;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		for(int j=x;j<=y;j++)
		{
			a[j]=1; 
		}
	}
	int sum=0;
	for(int i=0;i<=l;i++)
	{
		if(a[i]==0)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
