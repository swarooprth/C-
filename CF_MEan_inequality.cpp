#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n*=2;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0,j=n-1;i<j;)
        {
            cout<<a[j]<<" "<<a[i]<<" ";
            j--;
            i++;
        }
        cout<<endl;
    }
}

///344
444
111
111
111
111
 11
 11
 11
 11
 11
 11
 11
 11
 11