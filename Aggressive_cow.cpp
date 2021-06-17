#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
bool feasible(int a,int m,int arr[],int n)
{
	int dif=arr[0];
	int count=1;
	//cout<<a<<endl;
	for(int i=1;i<n;)
	{//cout<<"dif "<<dif<<"-"<<arr[i]<<"= "<<abs(dif-arr[i])<<endl;
		if(abs(dif-arr[i])>=a)
		{
			dif=arr[i];
			count++;
			if(count==m)
				return true;
			
		}
		else
			i++;
	}
	return false;
}
int main() 
{	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	ci t;
	while(t--)
	{	int n,c;
		ci n>>c;
		int a[n];
		for(int i=0;i<n;i++)
			ci a[i];
		sort(a,a+n);
		int mini=abs(a[0]-a[1]);
		int maxi=abs(a[0]-a[n-1]);
		
		int res;
		while(mini<=maxi)
		{
			int mid=(mini+maxi)/2;
			if(feasible(mid,c,a,n))
			{
				res=mid;
				mini=mid+1;
				
			}
			else
			{
				maxi=mid-1;
			}
		}
		cout<<res<<endl;
	}
	
	return 0;
}

