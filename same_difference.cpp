// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of all valid pairs
int countPairs(int arr[], int n)
{

	// To store the frequencies
	// of (arr[i] - i)
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
		map[arr[i] - i]++;

	// To store the required count
	int res = 0;
	for (auto x : map) {
		int cnt = x.second;

		// If cnt is the number of elements
		// whose differecne with their index
		// is same then ((cnt * (cnt - 1)) / 2)
		// such pairs are possible
		res += ((cnt * (cnt - 1)) / 2);
	}

	return res;
}

// Driver code
int main()
{
	
	long  long  t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x=countPairs(a,n);
		cout<<x<<endl;
	}


	return 0;
}
