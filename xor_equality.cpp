#include<iostream>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
int power(ll x, unsigned int y, ll p)
{
    int r = 1;   
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1) r = (r*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return r;
}
int main() 
{
int t;
ci t;
while(t--)
{
 ll n;
 ci n;
 ll mod=1e9+7;
 int x=power(2,n-1,mod);
 cout<<x<<endl;
}	
}

