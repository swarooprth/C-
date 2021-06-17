#include<bits/stdc++.h>
using namespace std;
int main()
{vector<int> v;
	int t;
	for(int i=0;i<t;i++)
	{
		cin>>v[i];
	}
	map<int, int> m; 
    int sum=0,j=1;
    for (int i = 0; i < t; i++) 
        m[v[i]]++;  
    for (auto i = m.begin(); i != m.end();) 
    {   i=find(m.begin(), m.end(), j);
        if(i!=m.end())
        {
            j++;
            i=m.begin();
            continue;
        }
        sum=sum+((i->first)*(i->second));
        if(sum==j)
        {
            j++;
            i=m.begin();
            sum=0;
        }
        else if(sum>j)
        {
            sum=sum-((i->first)*(i->second));
            i++;
        }
        else if(sum<j)
        {
            i++;
        }
        else if(sum!=j)
            break;https://leetcode.com/problems/maximum-number-of-consecutive-values-you-can-make/discuss/1118806/Short-and-Easy-w-Explanation-or-Greedy-Approach
    }
    cout<<j;
}
