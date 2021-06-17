
#include<iostream>
using namespace std;
int main()
{  int max=-1,min=-1;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        if(a[0]>a[1])
        {
            min=a[1];
            max=a[0];
        }
        else
        {
            min=a[0];
            max=a[1];
        }
        for(int i=2;i<n;i++)
        {
            if(a[i]>max)
            {
                min=max;
                max=a[i];
                cout<<"min val : "<<min<<endl;
                cout<<"max val : "<<max<<endl;
            }
            if(a[i]>min)
            {
                min=a[i];
                cout<<"min val : "<<min<<endl;
            }
            else if(a[i]==min||a[i]==max)
            continue;
        }
        return min;
}

