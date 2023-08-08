#include<bits/stdc++.h>
using namespace std;
vector<int> a[200010];
vector<int> b[200010];
long long cnt[200010];
long long n,m;
bool check(int x,int y)
{
	for(int i=1;i<=n;i++)
	{
		swap(b[i][x],b[i][y]);
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				return 0;
			}
		}
	} 
	return 1;
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		memset(cnt,0,sizeof(cnt));
		cin>>n>>m;
		for(long long i=1;i<=n;i++)
		{
			for(long long j=1;j<=m;j++)
			{
				int x;
				cin>>x;
				a[i].push_back(x);
				b[i].push_back(x);
			}
			sort(a[i].begin(),a[i].end());
			int l=1;
			for(auto j=a[i].begin(),k=b[i].begin();j<=a[i].end();j++,k++,l++)
			{
				if(*j!=*k)
				{
					cnt[l]=1;
				}
			}
		}
		int sum=0;
		for(long long j=1;j<=m;j++)
		{
			if(cnt[j]==1)
			{
				sum++;
			}
		}
		if(sum==0)
		{
			cout<<"1 1\n";
		}
		else if(sum>2)
		{
			cout<<"-1\n";
		}
		else
		{
			int x=0,y=0;
			for(int j=1;j<=m;j++)
			{
				if(cnt[j]==1&&x==0)
				{
					x=j;
				}
				else
				{
					y=j;
				}
			}
			if(check(x,y))
			{
				cout<<x<<" "<<y;
			}
			else
			{
				cout<<-1;
			}
			cout<<'\n';
		}
	}
 	return 0;
}

