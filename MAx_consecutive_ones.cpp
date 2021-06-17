#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>max)
                    max=count;
                else 
                    continue;
            }
            if(nums[i]==0)
                count=0;
        }
        return max;
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
    int y=s.findMaxConsecutiveOnes(arr);
    cout<<y;
}