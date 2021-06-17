#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
void solve()
{
	int g,p;
	ci g>>p;
	int a[10];
	for(int i=0;i<10;i++)
		ci a[i];
	int count=0;
	int sum=0;
	for(int i=9;i>=0;)
	{
		while(sum!=p)
		{
			sum=sum+a[i];
			if(sum>p)
				{i--;
					break;
				}
			else if(sum==p)
				{i--;break;}
			else i--;
		}
		count++;
		cout<<"   "<<count<<"  . "<<endl;
		cout<<sum<<i<<endl;
		if(i==g-1)
		{	if((sum-p)!=0)
			{cout<<count+1<<" mm"<<count+2<<endl;
						sum=0;
						break;}
			else if((sum-p)==0)
			{
				cout<<count<<" "<<count<<endl;
				break;
			}
		}
		else
			{sum=0;}
	}

}
int main()
{
	ll t ;
	ci t;
	while(t--)
	{
		solve();
	}
}
