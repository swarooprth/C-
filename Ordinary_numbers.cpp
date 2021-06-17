#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{ 
ll t;
ci t;
while(t--)
{
	ll n;
	ci n;
	if(n<=9)
		cout<<n<<endl;
	else
	{ll x ;
		if(n<=100)
		{
			x=9+n/11;
			cout<<x<<endl;
		}
		else
		{
			ll size=to_string(n).size();
			ll dif=pow(10,size-1)/100;
			ll size2=to_string(dif).size();
			ll count=1,p=1;
			while(count!=size)
			{
				p=10*p+1;
				count++;
			}
			ll ans=9+(9*size2)+(n/p);
			cout<<ans<<endl;
		}
	}
}	
}

