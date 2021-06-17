// DUTCH NATIONAL FLAG PROBLEM used for sorting 0,1,2
// here we assume that all elements from 0 to low-1 are 0
// all elements from mid+1 to high are 2
// and all elemnts from low to mid are 1

#include<iostream>
using namespace std;
#define FOR(k,a,b) for(int i=k;i<a;i+=b)
#define ci cin>>
#define co cout<<
void solve()
{   int n;
    ci n;
    int a[n];
    FOR(0,n,1)
    {
        ci a[i];
    }
       // Algo starts here
        int low=0,mid=0,high=n-1;
        for(int mid=0;mid<=high;)
        {
            if(a[mid]==0)
            {
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else if(a[mid]==2)
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
FOR(0,n,1)
    {
        co a[i]<<" ";
    }
    co endl;
}


int main()
{int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}