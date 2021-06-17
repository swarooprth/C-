#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int n,x,count=1;
  cin>>n;
  vector<int> v;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
       
   }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
      if(v[i]==0)
        {if(v[i+1]!=0)
          {
            swap(v[i],v[i+1]);
            
          }
         else
          {
            if(v[i+1]==0&&(i+1<n))
              { if(v[i+2]==0 && (i+2<n))
                  { count++;
                    continue;
                  }
                else
                  {if(i+2<n)
                    swap(v[i+2],v[i-count+1]);
                    else 
                      break;
                  }
              }
            else
              { swap(v[i],v[i-count]);
                i=i-count-1;
                count=1;
              }
         }
        }
    }
    for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }
}