#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	cout<<"key=";
	string key;
	cin>>key;
	int pos=0;
	for(int i=0;i<a.size();i++)
	{
		a[i]=(a[i]-(key[pos]-'a'+1)+'a')%'a'+'a';
		pos++;
		pos%=a.size();
	}
	cout<<a;
	system("pause");
 	return 0;
}

