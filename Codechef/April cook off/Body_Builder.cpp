#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<

int main()
{int t;
	ll N,R;
	ci t;
	while(t--)
	{
		ci N>>R;
		vector<long long int> a(N);
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		vector<long long int> b(N);
		for(int i=0;i<N;i++)
		{
			cin>>b[i];
		}
		long long int sum=b[0];
		long long int m=sum;
		for(int i=1;i<N;i++)
		{
			int dif=a[i]-a[i-1];
			sum=sum-R*dif;
			if(sum<0)
				sum=0;
			sum=sum+b[i];
			m=max(m,sum);

		}
		cout<<m<<endl;
	}
}
