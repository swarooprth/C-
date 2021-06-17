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
            vector<int> v(n);
            for(int i=0;i<n;i++)
                cin>>v[i];
            auto store=minmax_element(v.begin(),v.end());
            int maxi=*store.second;
            int mini=*store.first;
            int rp,lp,allp;
            for(int i=0;i<n;i++)
            {
                if(v[i]==mini||v[i]==maxi)
                lp=i;

            }
            for(int i=n-1;i>=0;i--)
            {
                if(v[i]==mini||v[i]==maxi)
                rp=i;
            }
            
            allp=n-lp+abs(rp)+1;
            lp+=1;
            
            //cout<<"allp "<<allp<<endl;
            cout<<min(n-rp,min(allp,lp))<<endl;
            


    }
}
