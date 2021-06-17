#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int min=INT_MAX,max=INT_MIN,count=1,sum=0;
        for(int i=0;i<a.size()-1;i++)
        {
            
            if(a[i+1]>a[i])
            {
                
                sum=sum+(a[i+1]-a[i]);
               
                
            }
        }
        return sum;
        
    }
};
int main()
{
    Solution s;
    int n,x;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int y=s.maxProfit(arr);
    cout<<y;
}
