#include<bits/stdc++.h>
using namespace std;
int main()
{int n,t=0;
	
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos=0,neg=0;
	for(int i=0;i<n;i++)
	    {
	    	if(arr[i]<0)
	    		neg++;
	    }
	pos=n-neg;    
	vector<int> pet(pos,0);
	vector<int> net(neg,0);
	for(int i=0,j=0,k=0;i<n;i++)
	    {
	    	if(arr[i]>=0)
	    		{
	    			pet[j]=arr[i];
	    			j++;
	    			cout<<"pet value: "<<arr[i]<<" "<<endl;
	    		}
	    	else 
	    		{net[k]=arr[i];
	    			k++;
	    			cout<<"net value: "<<net[i]<<" "<<endl;
	    		}
	    }
	for(int i=0;i<pos;i++)
	{
		cout<<pet[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<neg;i++)
	{
		cout<<net[i]<<" ";
	}
	cout<<endl;
	for(int i=0,j=0,k=0;i<pos||j<neg;)
	    {
	    	if(i<pos)
	    	{	arr[k]=pet[i];
	    		i++;
	    		k++;
	    	}
	    	if(j<neg)
	    	{
	    		arr[k]=net[j];
	    		j++;
	    		k++;
	    	}
	    	if(i>pos && j>neg)
	    	break;
	    }
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
