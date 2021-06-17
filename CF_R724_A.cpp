#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<

int main() 
{
    int t;
    ci t;
    while(t--)
    {
        ll n;
        ci n;
        ll a[n];
        for(int i=0;i<n;i++)
            ci a[i];
        sort(a,a+n);
        if(a[0]<0)
            {cout<<"NO"<<endl;
                        continue;}
        int dif=abs(a[1]-a[0]);
        set<int> s;
        for(int i=0;i<=a[n-1];i++)
            s.insert(i);
        cout<<"YES"<<endl;
        cout<<s.size()<<endl;
        for(auto i:s)
            cout<<i<<" ";
        cout<<endl;
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