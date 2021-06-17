#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ci t;
    while(t--)
    {
    	int n,k;
    	ci n>>k;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    		ci a[i];
    	}
    	sort(a,a+n);
    	ll sum=0,sum1=0;
    	int p=0;
    	k*=2;
    	for(int i=n-1;i>=0;i--)
    	{
    		
    		if(k==1&&p%2!=0&&i!=0)
    			{sum1=sum1+a[i]+a[i-1];
    			 break;}
    		else if(p%2!=0)
    		{sum1=sum1+a[i];p++;k--;}
    		else if(p%2==0)
    		{sum=sum+a[i];p++;k--;}


    	}
    	cout<<max(sum,sum1)<<endl;
    }

}

