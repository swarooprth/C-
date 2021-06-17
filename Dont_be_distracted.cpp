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
{int n;
	ci n;
	vector<int> a(26,0);
	string s;
	ci s;
	bool x=true;
	for(int i=0;i<n;i++)
	{if(a[s[i]-'A']!=0&&(s[i]!=s[i-1]))
		{
			x=false;
			cout<<"NO"<<endl;
			break;
		}
		a[s[i]-'A']++;

	}
	if(x)
		cout<<"YES"<<endl;
}	
}

