#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int main() ///24
//1 2 3 4 6 8 9 11 12 13 16 17 18 19 22 23 24 26 27 29 31 32 33 34 
{
ll t;
ci t;
while(t--)
{
	ll n;
	ci n;
	vector<int> a(n);
	vector<int> pos;
	for(int i=0;i<n;i++)
	{
		ci a[i];
		if(isPrime(a[i]))
			pos.push_back(i);
	}
	for(int i=0;i<pos.size();i++)
		cout<<pos[i]<<" ";

	cout<<"bhai";
	int j=0;
	for(int i=1;i<n;i++)
	{cout<<a[i]<<" ";
		if(__gcd(a[i],a[i-1])!=1)
		{
			while(a[pos[j]+1]==a[pos[j+1]]&&j<pos.size())
				{
					j++;
				}
			while(min(a[i-1],a[j+1])!=a[i-1]&&j<pos.size())
				j++;
			a[j+1]=a[i-1];
			int x=a[i-1];
			while(!isPrime(x))
				x++;
			a[i-1]=x;
			j=0;
		}
	}

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";



}	
}

