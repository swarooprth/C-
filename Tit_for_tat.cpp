#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		ci n>>k;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			ci a[i];
		}
		int m=INT_MAX;
		for(int i=0,j=n-1;i<j;)
		{
			a[i]=--a[i];
			if(a[i]<0)
				{a[i]=++a[i];
					i++;
					continue;
				}
			a[j]+=1;
			k--;
			if(k!=0)
				continue;
			else
				break;
		}
		for(int i=0;i<n;i++)
			co a[i]<<" ";
		co endl;
	}
}

