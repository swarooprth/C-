#include<iostream>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<

int main()
{int t;
	ll A,B,C,T,a,b,c;
	ci t;
	while(t--)
	{
		ci A>>B>>C>>T>>a>>b>>c;
		if(a>=A && b>=B && c>=C && (a+b+c>=T))
			co "YES"<<endl;
		else
			co "No"<<endl;
	}
}
