#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{int count=1;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> out(n,0);
		for(int i=0;i<n;i++)
		{
			a[i]=i+1;
		}
		if(k==0)
		{
			for(int i=0;i<n;i++)
				cout<<i+1<<" ";

		}
		else if(k>=(n/2.0))
		{
			cout<<-1;

		}
		else
		{int i=1;
			int m=n-2;
			int l=n;
			int p=k;
				while(k)
				{
					out[m]=a[l-1];
					m=m-2;
					l--;
					k--;
				}
				for(int i=0,j=0;j<n-p;i++)
				{
					if(!out[i])
					{
						out[i]=a[j];
						j++;
						cout<<out[i]<<" ";
					}
					else
						cout<<out[i]<<" ";
				}
			

		}
		cout<<endl;

	}
}


// 1 
// 2 4 1 5 3 
// -1
// -1
// 1 3 6 5 4 2
