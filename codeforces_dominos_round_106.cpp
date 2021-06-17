#include<iostream>
using namespace std;
int main()
{	int n,k1,k2,w,b,t;
	cin>>t;
	while(t--)
	{cin>>n>>k1>>k2>>w>>b;
	int tot_w=(k1+k2)/2;
	int tot_b=(2*n-(k1+k2))/2;
	if(w<=tot_w && b<=tot_b)
		cout<<"YES"<<" "<<endl;
	else
		cout<<"NO"<<" "<<endl;
	}
}
