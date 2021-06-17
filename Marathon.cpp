#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
void solve()
{
	int D,d,a,b,c;
	ci D>>d>>a>>b>>c;
	int mul=D*d;
	if(mul>=42)
		cout<<c<<endl;
	else if(mul>=21) cout<<b<<endl;
	else if(mul>=10) cout<<a<<endl;
	else if(mul<10) cout<<0<<endl;

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
