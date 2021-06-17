#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

bool func(int i,int j)
{
    return i>j;
}
int main() 
{
    int t;
    ci t;
    while(t--)
    {
        int n;
        ci n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            ci a[i];
        }
        for(int i=0,j=n-1;i<j;)
        {
            if(a[i]%2==0&&a[j]%2==0)
                i++;
            else if(a[i]%2!=0&&a[j]%2==0)
               { swap(a[i],a[j]);
                 i++;
                 j--;
               }
            else if(a[i]%2==0&&a[j]%2!=0)
            {
                i++;
                j--;
            }
            else if(a[i]%2!=0&&a[j]%2!=0)
            {
                j--;
            }
        }
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(a[i],2*a[j])>1)
                    count++;
            }
        }
        cout<<count<<endl;
        // int n;
        // ci n;
        // int a[n];
        // for(auto &i:a)
        //     ci i;
        // sort(a,a+n,[&](int x,int y)
        // {
        //     return (x%2)<(y%2);
        // });
        // for(auto i:a)
        //     cout<<i<<" ";
    }

}

//My application->my utilization