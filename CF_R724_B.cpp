#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<

int main() 
{
    int t;
    ci t;
    while(t--)
    {
        int n;
        ci n;
        string s;
        ci s;
        sort(s.begin(),s.end());
         cout<<s;
        set<char> b;
        for(int i=0;i<s.size();i++)
        {
            b.insert(s[i]);
        }
        cout<<endl;
         for(auto i:b)
             cout<<i;
        vector<int> a(26,0);
        for(auto i:b)
            a[i-'a']++;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                cout<<char(i+'a')<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        string l="";
        int count=1;
        for(auto i:b)
        {if(count==1||count==3)
            {
                l=l+i;
            }
            count++;
            if(count>=4)
                break;
        }
        cout<<l<<endl;
    }

    
   //  string s1="he";
   //  s1+='\0';
   //  string s2="ae";
   //  s2+='\0';
   //  cout<<strncmp(s1,s2,13);
   // return 0;

}

