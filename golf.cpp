#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{
int t;
ci t;
while(t--)
{
 ll n,x,k;
 ci n>>x>>k;
 if(x%k==0||((n+1)%k==x%k))
 	cout<<"YES"<<endl;
 else
 	cout<<"NO"<<endl;
}	
}

