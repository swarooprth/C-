#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int power(long long x, unsigned int y, long long int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main() 
{
    int t;
    ci t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int mod=1e9+7;
        ll x=power(2,n,mod)-1;
        ll y=power(x,m,mod);
        cout<<y<<endl;
    }

}


///    
////___  ___  ___

///
////___  ___  ___


////__1_  _1__  _1__
// 0 0 0 
// 0 0 1
// 0 1 0
// 0 1 1
// 1 0 0
// 1 0 1
// 1 1 0
// 1 1 1