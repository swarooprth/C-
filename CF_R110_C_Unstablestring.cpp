#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

bool check(string s)
{int flag=0;
    if(s.size()==1) return true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?')
        {if(i!=n-2)
            {if(s[i-1]==s[i+1])
                flag=1;
             else if(s[i+1]=='?')
                flag=1;
            }
            else if(i==n-2)
                flag=1;

        }

    }
    if(flag==1)
        return true;
    else
        return false;
}
int main() 
{
    int t;
    ci t;
    set<string> s;
    while(t--)
    {
       string s;
       ci s;
       for(int i=0;i<)

    }

}

//My application->my utilization