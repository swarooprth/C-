#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        vector<int> aux1(n,-1);
        vector<int> aux2(n,-1);
        int flag=0,count;
        aux1[0]=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                aux1[i]++;
                flag=1;
                count=0;
            }
            else
            {
                if(flag==1)
                {
                    count++;
                    aux1[i]=count;
                }
            }
        }
        aux2[0]=0;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]==2)
            {
                aux2[i]++;
                flag=1;
                count=0;
            }
            else
            {
                if(flag==1)
                {
                    count++;
                    aux2[i]=count;
                }
            }
        }
        vector<int> res(n,-1);
        for(int i=n-1;i>0;i--)
        {   if(a[i]==2) {res[i]++;continue;}
            if(a[i]==1)
            {res[i]++;
                flag=1;
                continue;
            }
            if(flag==1 && a[i]==0)
            {
                res[i]=max(aux1[i],aux2[i]);
                
            }
            else
            {
             flag=0;
             res[i]=min(aux1[i],aux2[i]);
          
            }
        }
        cout<<"\n";
        for(auto i:aux1)
        cout<<i<<" ";
        cout<<"\n";
        for(auto i:aux2)
        cout<<i<<" ";
        cout<<"\n";
        for(auto i:res)
        cout<<i<<" ";}

        cout<<endl;
        for(int i=0;i<m;i++)
            cout<<res[i]<<" ";


        cout<<"end"<<endl;
    }
}
