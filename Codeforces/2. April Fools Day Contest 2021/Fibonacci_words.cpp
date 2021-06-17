#include<iostream>
using namespace std;
int main()
{
	string s;
	bool x=true;
	cin>>s;
	int n=s.size();
	if(n==1||n==2)
		cout<<"NO"<<endl;
	else if(n==0||n>10)
		cout<<"NO"<<endl;
	for(int i=0;i<n-2;i++)
	{if(int(s[i])>=97||int(s[i+1])>=97||int(s[i+2])>=97)
		{
			x=false;
			break;
		}
		if(((int(s[i])+int(s[i+1])-1-128)%26)==(int(s[i+2])-64))
		{
			continue;
		}
		else
		{
			x=false;
			break;
		}
	}
	if(x)
		cout<<"YES";
	else
		cout<<"NO";

}