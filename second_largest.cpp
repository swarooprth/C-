#include<iostream>
using namespace std;
int main()
{  int max=-1,min=-1;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        max=a[0];
        for(int i=1;i<n;i++)
        {   if(a[i]==min||a[i]==max)
            continue;
            if(a[i]>max)
            {
                min=max;
                max=a[i];
               
            }
            else if(a[i]>min)
            {
                min=a[i];
            }
            
        }
       
        return min;
}

