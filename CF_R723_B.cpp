#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n>1099) cout<<"YES"<<endl;
        else
        {ll x=to_string(n).size();
                ll s=0;
                while(x!=0)
                {
                    s=10*s+1;
                    x--;
                }
                while(1)
                {
                    ll d=n/s;
                    d*=s;
                    cout<<d<<endl;
                    n-=d;
                    cout<<n<<endl;
                    ll red=to_string(s).size();
                    red-=1;
                    double minus=pow(10,red);
                    s-=minus;
                    cout<<s<<endl;
                    if(n==0)
                    {
                        cout<<"YES"<<endl;
                        break;
                    }
                    else if(n<10)
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                }}
 
    }
}