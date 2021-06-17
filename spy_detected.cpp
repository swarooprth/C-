#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-2;i+=1)
        {
            if(a[i]==a[i+1])
            {
                if(a[i+1]!=a[i+2])
                {cout<<i+3<<endl;
                break;
                }
                else
                    continue;

            }
            else if(a[i]==a[i+2])
            {
                if(a[i]!=a[i+1])
                 {cout<<i+2<<endl;
                break;}
                 else
                    continue;
            }
            else{
            cout<<i+1<<endl;
            break;}
        }
        
    }
    return 0;
}