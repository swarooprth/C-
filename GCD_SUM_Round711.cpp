#include<bits/stdc++.h>
using namespace std;

// long long int GCD(long long int a,long long int b)
// {
// 	if(b==0)
// 		return a;
// 	return GCD(b,a%b);
// }
long long int number(long long int n)
{	long long int t=n;
	long long int sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n/=10;
		
		
	}
	return sum;

}
int main()
{long long int t;
	cin>>t;
	while(t--)
	{long long int n;
	  	cin>>n;
	  	long long int m=n;
	  	long long int sum=0;
	  	
	  	while(1)
	  	{
	  		int x=__gcd(m,number(m));
	  		if(x>1)
	  		{
	  			cout<<m<<endl;
	  			break;
	  		}
	  		++m;
	  	}
	  	// long long int x=number(m);
	  	
	  	// while(x==1)
	  	// {
	  	// 	m++;
	  		
	  	// 	x=number(m);
	  	// }
	  	// if(t==0)
	  	// 	cout<<m;
	  	// else
	  	// cout<<m<<endl;
	  }                                              
	
}
