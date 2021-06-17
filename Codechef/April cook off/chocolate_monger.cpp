#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<

int main()
{int t;
	ll n,x;
	ci t;
	while(t--)
	{
		ci n>>x;
		int p;
		unordered_set<int> b;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{	cin>>a[i];
			b.insert(a[i]);

		}
		int dif=n-x;
		if(dif>=b.size())
			cout<<b.size()<<endl;
		else
			cout<<dif<<endl;

	}
}
