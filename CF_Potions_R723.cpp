#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // your code goes here
    ll n;
    cin>>n;
    ll a[n];
    int sum=0;
    vector<int> neg;
    ll count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0)
            {sum=sum+a[i];
            count++;}
        else
            neg.push_back(a[i]);
    }
    ll count2=0;
    ll j=0;
    ll p=0;
    ll sum2=sum;
    for(int i=0;i<neg.size();)
    {
        sum2=sum2+neg[i];
        if(sum2<0)
        {
            j++;
            i=j;
            count2=0;
            sum2=sum;
        }
        else
        {
            count2++;
            i++;
            p=max(p,count2);
        }
    }
    cout<<count+p<<endl;
}