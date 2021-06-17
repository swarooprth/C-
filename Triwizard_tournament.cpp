#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
ll m=1e9+7;
int func(int t,int x)
{ll temp;
	while(pow(2,t)<=x)
	{	
		
		t++;
	}
	temp=x-pow(2,t-1);
return temp;
}
int main()
{
	
	ll x;
	ci x;
	int count=0;
	int t=0;
	int temp=func(t,x);
	count++;
	while(temp>0)
	{
		temp=func(t,temp);
		count++;

	}
	cout<<count;

}

