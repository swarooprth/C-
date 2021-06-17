#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{
	ll n,q,l,r,m;
	ci n>>q;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		ci a[i];
	}
	int x;
	for(int i=0;i<q;i++)
	{
		ci x;
		set<int> s;
		vector<int> o(n);
		switch(x)
		{
			case 1:
			ci l>>r>>m;
			for(int i=0;i<n;i++)
			{
				if(a[i]==l){
				o[i]=l&m;
				s.insert(a[i]);}
				else if(a[i]==r){
					o[i]=r&m;
					s.insert(a[i]);}
				else
					s.insert(a[i]);
			}
			for(int i=0;i<n;i++)
				cout<<o[i]<<" ";
			cout<<endl;
			break;
			case 2:
			ci l>>r>>m;
			for(int i=0;i<n;i++)
			{
				if(a[i]==l){
				o[i]=l|m;
				s.insert(a[i]);}
				else if(a[i]==r){
					o[i]=r|m;
					s.insert(a[i]);}
				else
					s.insert(a[i]);
			}
			for(int i=0;i<n;i++)
				cout<<o[i]<<" ";
			cout<<endl;
			break;
			case 3:
			ci l>>r>>m;
			for(int i=0;i<n;i++)
			{
				if(a[i]==l){
				o[i]=l^m;
				s.insert(a[i]);}
				else if(a[i]==r){
					o[i]=r^m;
					s.insert(a[i]);}
				else
					s.insert(a[i]);
			}
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
			break;
			case 4:
			ci l>>r;
			int count=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]>=l&&a[i]<=r)
					s.insert(a[i]);
			}
			cout<<s.size()<<endl;
			break;
		}
	}
}

