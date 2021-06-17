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
	ll n,x;
	ci n>>x;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		ci a[i];
	sort(a.begin(),a.end());
	int sum=0;
	vector<int> res;
	int temp=0;
	bool m=true;
	for(int i=n-1;i>=0;i--)
	{
		sum=sum+a[i];
		if(sum<x)
			res.push_back(a[i]);
		if(sum==x)
		{
			swap(a[i],a[i-1]);
			res.push_back(a[i]);
		}
		if(sum>x)
			res.push_back(a[i]);
		if(sum==x&&i==0)
		{   m=false;
			cout<<"NO"<<endl;
			break;
		} 
	}
	if(m)
	{cout<<"YES"<<endl;
		for(auto i:res)
			cout<<i<<" ";
	}
	cout<<endl;
}
	
}

