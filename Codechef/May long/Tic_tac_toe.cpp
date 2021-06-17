#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{
	ll t;
	ci t;
	while(t--)
	{
		char a[3][3];
		int xc=0,oc=0,fxc=0,fxo=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
				{
					ci a[i][j];
				}
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
				{
					if(a[i][j]=='X') xc++;
					else if(a[i][j]=='O') oc++;
				}
		}
		if(xc!=oc&&(xc-1)!=oc) 
		{
			cout<<'3'<<endl;
			continue;
		}
		for(int i=0;i<3;i++)
 		{
 			if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
 			{
 				if(a[0][i]=='X') fxc++;
 				else if(a[0][i]=='O') fxo++;
 			}
 		}
 		for(int i=0;i<3;i++)
 		{
 			if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
 			{
 				if(a[i][0]=='X') fxc++;
 				else if(a[i][0]=='O') fxo++;
 			}
 		}
 		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
 		{
 			if(a[0][0]=='X')
 				fxc++;
 			else if(a[0][0]=='O')
 				fxo++;
 		}
 		if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
 		{
 			if(a[0][2]=='X')
 				fxc++;
 			else if(a[0][2]=='O')
 				fxo++;	
 		}
 		
 		if(fxc==2 && xc==5) {cout<<'1'<<endl; continue;}
		if((fxc+fxo)>1||(fxo==1&&xc==oc+1)||(fxc==1&&oc==xc)) {cout<<'3'<<endl;continue;}
		if((xc+oc)==9||(fxc+fxo)==1) {cout<<'1'<<endl;continue;}
		cout<<'2'<<endl;
	}
	return 0;
}

