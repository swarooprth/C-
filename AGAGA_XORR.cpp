#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll x=0;
		for(int i=0;i<n;i++)
		{
			ci a[i];
			x^=a[i];

		}	
		int count=0;
		if(x)
			{int p=0;
				for(int i=0;i<n;i++)
				{
					p=p^a[i];
					if(p==x)
					{
						p=0;
						count++;
					}	
				}
				if(count>2)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		else
			cout<<"YES"<<endl;
	}
}

