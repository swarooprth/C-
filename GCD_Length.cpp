#include<bits/stdc++.h>
using namespace std;
int main()
{float t,a,b,c;
	cin>>t;
	while(t--)
	{ long long int first,second;
		cin>>a>>b>>c;
	
		first=pow(10,c-1);
		while(to_string(first).length()<b)
		{	
			first*=2;

		}
		second=pow(10,c-1);
		while(to_string(second).length()<a)
		{	
			second*=3;

		}
		cout<<second<<" "<<first<<endl;
	}
}
