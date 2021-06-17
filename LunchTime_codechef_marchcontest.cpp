#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string word;
	getline(cin,word);
	set<string> s;
        string x="";
        for(int i=0;i<word.size();i++)
        {
            if(isdigit(word[i]))
            {if(word[i]=='0')
        		{
        			if(word[i+1]=='0')
        				continue;
        			if(isdigit(word[i+1]))
        				continue;
        			if(isalpha(word[i+1]))
        				{x=x+word[i];
        					continue;}
        		}
                x=x+word[i];
            }
            else
            {   cout<<x<<endl;
            	if(x.size()!=0)
            	{s.insert(x);
            	x="";
                 continue;
                }
                else
                    continue;
            }
                
        }
        cout<<"set size: "<<s.size();
	return 0;
}
