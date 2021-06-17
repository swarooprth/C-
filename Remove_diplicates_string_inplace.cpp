#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
void solve()
{
	string s;
	ci s;
	unordered_map<char,int> m;
	for(auto i:s)
	{
		if(m.find(i)==m.end())
			m[i]=1;
		else
			m[i]++;

	}
	map<char,int>::iterator it;
	for(auto it:m)
	{
		cout<<it.first<<"->"<<it.second<<endl;
	}
}
int main()
{
	ll t ;
	ci t;
	while(t--)
	{
		solve();
	}
}
