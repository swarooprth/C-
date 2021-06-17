#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
// bool check(int a,int b,ll M)
// {
// 	if((M%a)==((M%b)%a))
// 		{cout<<"cTrue a:"<<a<<" b:"<<b<<endl;
// 			return true;}
// 	else
// 		return false;
// }
int main() 
{	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	ci t;
	while(t--)
	{
		ll n,m;
		ci n>>m;
		ll count=0;
		// for(int b=2;b<=n;b++)
		// {
		// 	ll x=m%b;
		// 	for(int a=1;a<b;a++)
		// 	{
		// 		if(m%a==x%a)
		// 			{count++;
		// 				cout<<"("<<a<<","<<b<<")"<<nl;
		// 			}
		// 	}
		// }
		vector<long long> mod(n+1,1);
		for(long long b=2;b<=n;b++)
		{
			ll a =m%b;
			cout<<"a: "<<a<<nl;
			count+=mod[a];
			cout<<"count: "<<count<<endl;
			for(ll j=a;j<=n;j+=b)
			{	cout<<"j: "<<j<<nl;

				mod[j]++;
				cout<<"array: "<<mod[j]<<endl;
			}
		}
		cout<<count<<nl;
		
	}
	
	return 0;
}

