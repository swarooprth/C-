#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
#define pb push_back
int main() 
{
    int t;
    ci t;
    while(t--)
    {ll n,m;
        ci n>>m;
        int a[n];
        int b[m];
        
        for(int i=0;i<n;i++)
            ci a[i];
        for(int i=0;i<m;i++)
            ci b[i];
        vector<int> aux1(n,-1);
        vector<int> aux2(n,-1);
        vector<int> comp(n,0);
        
        int flag=0;
        int pos1,pos2;

        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {aux1[i]=aux1[i]+1;
                pos1=i;
                flag=1;
            }
            else                      
            {if(flag==1)
                aux1[i]=i-pos1;
            }
        }
        
        
        flag=0;
        for(int i=n-1;i>0;i--)
        {   
            if(a[i]==2)
            {aux2[i]=aux2[i]+1;
                pos2=i;
                flag=1;

            }
            else
            {if(flag==1)
                aux2[i]=pos2-i;
            }
        }
        aux1[0]=0,aux2[0]=0;
        for(int i=0;i<n;i++)
        {
            if(aux1[i]==-1||aux2[i]==-1)
            {
                aux1[i]=max(aux1[i],aux2[i]);
            }
            else
            {
                aux1[i]=min(aux1[i],aux2[i]);
            }
        }
        //cout<<"aux1: ";
        // for(auto i:aux1)
        //     cout<<i<<" ";
        
        // cout<<endl;
        for(int i=0;i<m;i++)
            cout<<aux1[b[i]-1]<<" ";

        // cout<<"\n";
        // for(auto i:aux2)
        //     cout<<i<<" ";
        // cout<<"\n";
        // for(auto i:res)
        //     cout<<i<<" ";
        

        // cout<<"end"<<endl;
        cout<<endl;

    }


}

//My application->my utilization
// 0 2 1 0 1 2 0
// 0 0 -1 -1 0 0 1