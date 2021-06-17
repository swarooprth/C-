#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
ll func(ll n)
{
	ll dig=(to_string(n).size())-4;
	if(int(2050*pow(10,dig))>n)
		dig--;
	if(to_string(n).size()==4&&n<2050)
		return 0;
	ll dif=n-(2050*pow(10,dig));
	return dif;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll count=0;
		if(n%2050!=0)
			cout<<-1<<endl;
		else
		{ll f=n/2050;
			ll s=0;
		while(f!=0)
		{
			s+=f%10;
			f/=10;
		}
		cout<<s<<endl;
	}


	}

}



