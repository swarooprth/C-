#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{
	int n,k;
	ci n>>k;
	int s=0;
	while((n/k)>=1)
	{
		s=s+n%k;
		n/=k;
	}
	s=s+n;
	co s;

}

