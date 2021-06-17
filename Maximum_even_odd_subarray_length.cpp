#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int count=1,max=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]%2==0)
        {if(a[i+1]%2!=0)
            {count++;if(count>max) max=count;
            }
            else count=1;}
        else
        {if(a[i+1]%2==0)
            {count++;if(count>max) max=count;
            }
            else count=1;
        }
    }
    cout<<"value of longest length: "<<count;
}