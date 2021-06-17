#include<bits/stdc++.h>
using namespace std;
int main() 
{
   
    int n;
    cin>> n;
    int a[n],t=n;
    for(int i=0;i<n;i++) 
      cin>>a[i];
    for(int i=0;i<n;i++)
    {
     if(a[i]!=0 && t!=n) 
         {
          swap(a[i],a[t]);   ///loved yash
          t++;
         }
      else if(a[i]==0 && t==n) ///superb line 
        t=i;

    }
    for(int i=0;i<n;i++) 
      cout<<a[i]<<" ";

}