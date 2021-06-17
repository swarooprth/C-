#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;

	while(t--)
	{int count=0;
		cin>>n;
		int m;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			if(m==1||m==3)
				count++;
		}
		cout<<count<<endl;
	}
}
