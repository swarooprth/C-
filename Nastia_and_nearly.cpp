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
{	ll a,b;
	ci a>>b;
	ll prod=(a*b);
	
		long long int p=prod+a;
		int i=2;
		if(b==1) cout<<"NO"<<endl;
		else
		{while(a==p||p==0)
		{
			prod=prod*i;
			p=prod+a;
			i++;
		}

		cout<<"YES"<<endl;
		cout<<a<<" "<<prod<<" "<<p<<endl;
		}
	
}	
}

