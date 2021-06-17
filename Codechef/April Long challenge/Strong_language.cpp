#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{int n,k,count=0;
	int breaki=0;
	cin>>n>>k;
	string s;
	cin>>s;
	bool x=true;
	for(int i=0;i<n;i++)
	{
	    if(s[i]=='*')
	    {if(breaki==0)
	        {count++;
	        breaki++;}
	        else
	        count++;
	        
	        if(count>=k)
	        {x=false;
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    else if(s[i]!='*')
	    {
	        breaki=0;
	        count=0;
	    }
	}
	if(x)
	cout<<"NO"<<endl;
	}
	return 0;
}
