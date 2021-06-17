#include<iostream>
using namespace std;
int main()
{    int t;
    cin>>t;     
    while(t--)
    {int a,b;
        cin>>a>>b;   
        string s;
        cin>>s;
        int count_a=0;
        int count_b=0;
        int n=a+b;
        bool x=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                count_a++;
            else if(s[i]=='1')
                count_b++;
            else continue;
        }
        cout<<"count of 0s = "<<count_a<<endl;
        cout<<"count of 1s = "<<count_b<<endl;
        if(a%2!=0&&b%2!=0)
        {
            x=true;
            cout<<-1;
            
        }
        else
        {for(int i=0,j=a+b-1;i<=j;)
                {   
                    if(s[i]==s[j]&&s[i]!='?'&&s[j]!='?')
                    {
                        i++;
                        j--;
                    }
                    else if(s[i]=='0'&&s[j]=='?')
                    {
                        if(count_a!=a)
                            {s[j]='0';
                            count_a++;
                            i++;j--;
                        }
                    }
                    else if(s[i]=='1'&&s[j]=='?')
                    {
                        if(count_b!=b)
                        {
                            s[j]='1';
                            count_b++;
                            i++;
                            j--;
                        }
                        
                    }
                    else if(s[i]=='?'&&s[j]=='0')
                    {
                        if(count_a!=a)
                            {s[i]='0';
                            count_a++;
                            i++;j--;
                        }
                    }
                    else if(s[i]=='?'&&s[j]=='1')
                    {
                        if(count_b!=b)
                            {s[i]='1';
                            count_b++;
                            i++;j--;
                        }
                    }
                    else if(s[i]=='?'&&s[j]=='?')
                    {
                        if(count_a!=a)
                        {
                            s[i]='0';
                            s[j]='0';
                            i++;
                            j--;
                            count_a+=2;
                            
                        }
                        else if(count_b!=b)
                        {   s[i]='1';
                            s[j]='1';
                            i++;
                            j--;
                            count_b+=2;
                            
                        }
                        else
                        {x=true;
                            cout<<-1;
                            break;
                        }
                    }
                    else
                    {
                        x=true;
                        cout<<-1;
                        break;
                    }
        
                }}
        if(!x)
        {
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
        }
        cout<<endl;
        
    }
    return 0;
}