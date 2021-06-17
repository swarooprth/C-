#include<bits/stdc++.h>
using namespace std;
int hat(string s)
{long long int n=s.size();
        string c="aeiou";
        int count=0;
        int t=0;
        if(n<5)
            return 0;
        else
        {
            for(int i=0,j=0;i<n-1;)
            {
                if(s[i]==c[j])
                {
                    count++;
                    cout<<s[i];
                    if(s[i]!=s[i+1])
                    {j++;
                     t++;
                    }
                    i++;
                    
                }
                else
                {
                    count=0;
                    j=0;
                    t=0;
                    i++;
                    continue;
                }
            }
        }
        return count;
    }
int main()
{string s;
    cin>>s;
    int p;
    p=hat(s);
    cout<<p;
}