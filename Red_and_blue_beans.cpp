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
		long long int r,b,d;
		cin>>r>>b>>d;
		if(d==0)
		{
			if(r!=b)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else
		{
			if(b==1||r==1)
			{
				if(abs(b-r)>d)
					cout<<"No"<<endl;
				else
					cout<<"YES"<<endl;
			}
			else
			{
				int m=min(r,b);
				int n=max(r,b);
				int t=1;
				bool x=true;
				while(n-m>=d)
				{
					m-=t;
					n=n-t-d;
					if(m==0&&n>0)
					{   x=false;
						cout<<"NO"<<endl;
						break;
					}
				}
				if(x)
					cout<<"YES"<<endl;
			}
		}
	}
}

