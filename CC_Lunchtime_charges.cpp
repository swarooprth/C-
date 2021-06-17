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
    	int n,k;
        ci n>>k;
        string s;
        ci s;
        int a[k];
        vector<int> v(n);
        for(int i=0;i<k;i++)
            ci a[i];
        if(n==1)
        {
            for(int i=0;i<k;i++)
                cout<<0<<endl;
            continue;
        }

        for(int i=0;i<n;i++)
            v[i]=s[i]-'0';
        int sum=0;
        v[a[0]-1]=!v[a[0]-1];
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
                sum=sum+2;
            else
                sum=sum+1;

        }
        cout<<sum<<endl;
        for(int i=1;i<k;i++)
        {
            v[a[i]-1]=!v[a[i]-1];
            if(a[i]==1)
            {
                if(v[a[i]-1]==v[a[i]])
                    sum+=1;
                else
                    sum-=1;
            }
            else if(a[i]==n)
            {
                if(v[a[i]-1]==v[a[i]-2])
                    sum+=1;
                else
                    sum-=1;
            }
            else 
            {
                if(v[a[i]-1]==v[a[i]-2])
                {
                    sum+=1;
                    if(v[a[i]-1]==v[a[i]])
                        sum+=1;
                    else
                        sum-=1;
                }
                else
                { sum-=1;
                    if(v[a[i]-1]==v[a[i]])
                        sum+=1;
                    else
                        sum-=1;
                }
            }
            cout<<sum<<endl;
        }
        

    }


}

