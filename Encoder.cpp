#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string key;
	cin>>key;
	int pos=0;
	cout<<a<<'\n'<<key<<'\n';
	for(int i=0;i<a.size();i++)
	{
		a[i]=char((int)((int)a[i]+(int)(key[pos]-'a'+1))%'a'+'a');
		pos++;
		pos%=a.size();
	}
	cout<<a;
 	return 0;
}

