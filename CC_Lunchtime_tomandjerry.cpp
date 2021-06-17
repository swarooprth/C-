#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ci t;
    while(t--)
    {
    	int a,b,c,d,k;
        ci a>>b>>c>>d>>k;
        int p=abs(c-a)+abs(d-b);
        int dif=k-p;
        if(k>=p&&(k-p)%2==0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }


}

