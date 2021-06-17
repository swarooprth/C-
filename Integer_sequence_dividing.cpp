#include<iostream>
#include<math.h>
using namespace std;
int main()
{
// 	freopen("input.txt", "r", stdin);
// freopen("output1.txt", "w", stdout);
int n;
	cin>>n;
	if(n%4==0||n%4==3)
		cout<<"0";
	else
		cout<<"1";	
}
