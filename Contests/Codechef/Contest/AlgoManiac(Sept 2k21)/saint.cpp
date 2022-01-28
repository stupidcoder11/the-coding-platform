// Problem link : https://www.codechef.com/CDMN21B/problems/THREEQ

#include <bits/stdc++.h>
#define int long long int

using namespace std;

// ..............................................................................................

// My code
void solve()
{
	int cntOne = 0;

	for(int i=0; i<3; i++)
	{
		int x;	cin >> x;
		if(x == 1)
			cntOne++;
	}

	for(int i=0; i<3; i++)
	{
		int x;	cin >> x;
		if(x == 1)
			cntOne--;
	}

	cout << ((cntOne == 0)?"Pass\n":"Fail\n");
}

// ..............................................................................................

// Driver function
int32_t main()
{
	// Fast IO
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;
	while(t--)
	{
		solve();
	}
	
	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}