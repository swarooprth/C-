#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int N,A,B;
        cin>>N>>A>>B;
        long long int count_1=0,count_2=0;
        while(N--)
        {
            string s;
            cin>>s;
            if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
            count_1+=A;
            else
            count_2+=B;
            
        }
        if(count_1==count_2)
        cout<<"DRAW"<<endl;
        else if(count_1>count_2)
        cout<<"SARTHAK"<<endl;
        else
        cout<<"ANURADHA"<<endl;
    }
	// your code goes here
	return 0;
}
