#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{
	
		ll n;
		cin>>n;
		vector<long long int> s;
		ll a[n-1];
		ll prod=1;
		for(int i=0;i<n-1;i++)
		{
			a[i]=i+1;
		}
		for(int i=1;i<n-1;i++)
		{
			if(__gcd(a[i],n)==1)
				{
					s.push_back(a[i]);
					prod=prod*a[i];
				}
		}
		
		ll o=s.size();
		while(1)
		{
			long long int rem=prod%n;
			if(rem==1)
			{
				cout<<o+1<<endl;
				break;
			}
			else
			{
				
				prod/=s[o-1];
				o--;
			}
		}
		cout<<1<<" ";
		for(int i=0;i<o;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
		return 0;

	
}

