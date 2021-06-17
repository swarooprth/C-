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
	ci t;
	while(t--)
	{
		ll n,w,w1;
		ci n>>w>>w1;
		vector<int> a(n,1);
		for(int i=0;i<n;i++)
			{
				ci a[i];
				
			}
		sort(a.begin(),a.end());
		ll sum=0;
		if(w1>w)
			cout<<"YES"<<endl;
		else
		{int dif=w-w1;
			bool x=true;
			for(int i=0;i<n;)
			{
				if(a[i]==a[i+1])
					{
						dif=dif-(a[i]*2);
						i+=2;
						if(dif<0)
							dif=dif+(a[i-2]*2);
						else if(dif==0)
						{
							x=false;
							cout<<"YES"<<endl;
							break;
						}
					}
					else
						i++;

			}
			if(x)
				cout<<"NO"<<endl;
		}
	}
}

