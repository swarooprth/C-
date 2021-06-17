#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int r)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r-i;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
void mergesort(int a[],int l,int r)
{for(int i=l;i<r;i++)
	if(a[l]>a[r])
	{
		swap(a[l],a[r]);
		i++;
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=0;
	int r=n-1;
	int mid=l+(r-l)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	merge(a,l,r);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}




