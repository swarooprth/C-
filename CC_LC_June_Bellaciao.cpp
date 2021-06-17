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
        ll D,d,p,q;
        ci D>>d>>p>>q;
        ll divide=D/d;
        //cout<<"divide; "<<divide<<endl;
        ll last=p+(divide-1)*q;
        ll first=p;
        //cout<<"first: "<<first<<" last: "<<last<<endl;
        ll sum=((divide)*(first+last))/2;
        sum*=d;
        //cout<<"sum: "<<sum<<endl;
        if(D%d==0)
            cout<<sum<<endl;
        else
            cout<<sum+(last+q)*(D%d)<<endl;


    }

}

//My application->my utilization