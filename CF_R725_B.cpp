#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for(int i=0;i<n;i++)
            {cin>>a[i];

            }
        int sum=0;
        sum=accumulate(a,a+n,sum);
        //cout<<sum;
        int x=sum/n;
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>x)
                count++;
        }
        cout<<count<<endl;
    }
}
