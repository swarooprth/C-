#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,j,i,temp;
	cin>>n>>q;
	int index=0;
	int swap=0;
	vector<int> nth(n),qth(q),res(n+1);
	vector<int>::iterator it;
	for(i=0;i<n;i++)
	{
		cin>>nth[i];
	}
	for(i=0;i<q;i++)
	{
		cin>>qth[i];
	}
	for(int k=0;k<q;k++)
	{
		for(j=0;j<n;j++)
		{
			if(nth[j]==qth[k])
				{temp=nth[j];
				break;}
		}
		cout<<j+1<<" ";
		for(i=j-1;i>=0;i--)
		{
			nth[i+1]=nth[i];
		}
		nth[0]=temp;
		
	}
	
}
