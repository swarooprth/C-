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
        int a,b,c,d;
        vector<int> v(4);
        for(int i=0;i<4;i++)
        {
            cin>>v[i];
        }
        int one=max(v[0],v[1]);
        int two=max(v[2],v[3]);
        sort(v.begin(),v.end());
        if((one==v[2]&&two==v[3])||(one==v[3]&&two==v[2]))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}

//My application->my utilization