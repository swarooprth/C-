#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(const vector<int>& a) {
        int min=INT_MAX,max=INT_MIN,count=1,sum=0;
        int n=a.size();
        cout<<"value of n: "<<n<<endl;
        for(int i=0;i<n-1;i++)
        {cout<<"value of i :"<<i<<endl;
            
            if(a[i+1]>a[i])
            {
                
                sum=sum+(a[i+1]-a[i]);
               
                cout<<"sum: "<<sum<<endl;
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
    cout<<"int main n : "<<n<<endl;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<"array value: "<<arr[i]<<endl;
    }
    int y=s.maxProfit(arr);
    cout<<y;
}
