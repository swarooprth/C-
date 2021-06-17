#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,l,r;
       cin>>n>>l>>r;
       int a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int  i=n-1,j=0;i>=0;i--)
        {
            if(a[i]+a[j]<=r)
            {
                if(a[i]+a[j]>=l)
                {
                    j--;
                    int x=
                }
                else
                    i++;
            }
            else
                j--;
        }


    }
}
