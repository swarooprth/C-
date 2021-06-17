#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{long long int n;
		cin>>n;
		string s;
		cin>>s;
		bool x=true;
		if(n%3==0)
		{long long int count_t=0,count_m=0;
					if(s[0]=='M'||s[n-1]=='M')
						{cout<<"No"<<endl;
						}
					else
					{
						for(int i=0;i<n;i++)
						{
							if(s[i]=='M')
								{count_m++;
								if(count_m>2)
									{	x=false;
										cout<<"No"<<endl;
										break;
									}
								
								}
							
							if((i+1)%3==0)
								{if(count_m)
									count_m=0;
									else if(count_m==0)
									{
										x=false;
										cout<<"No"<<endl;
										break;
									}
								}
						}
						if(x)
						cout<<"Yes"<<endl;
					}}	
					else
						cout<<"No"<<endl;
		

	}
	return 0;
}