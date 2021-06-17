#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int> x;
x.push_back(a[n-1]);
int cur=a[n-1];
for(int i=n-1;i>0;i--)
    {
        if(a[i-1]>=cur)
        {x.push_back(a[i-1]);
        cur=a[i-1];}
            
    }
reverse(x.begin(),x.end());
for(int i=0;i<x.size();i++)
cout<<x[i]<<" ";
}

