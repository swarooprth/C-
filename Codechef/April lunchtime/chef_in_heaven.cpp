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
	string s;
	ci s;
	int count=0;
	bool x=true;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
			count++;
		if(count>=(i+1)/2.0)
		{x=false;
		cout<<"YES"<<endl;
		break;
		}
	}
	if(x)
		cout<<"NO"<<endl;
	
}

		return 0;

	
}

