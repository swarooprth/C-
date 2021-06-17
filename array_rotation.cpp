#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{
	ll m=1e9+7;
	ll n,q;
	ci n;
	ll a[n];
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		ci a[i];
		sum=(abs(sum+a[i]))%m;

	}
	ci q;
	int p;
	for(int i=0;i<q;i++)
	{
		cin>>p;
		sum*=2*p;
		cout<<sum<<endl;
	}
	

}

