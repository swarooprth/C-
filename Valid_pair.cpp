#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B,C;
	cin>>A>>B>>C;
	if(A==B||A==C)
	{
	    cout<<"YES";
	}
	else if(B==C)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	return 0;
}
