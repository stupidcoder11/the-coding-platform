#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{
	int n;	cin >> n;

	int even_available = n/2;
	int odd_available = n-even_available;

	int odd = 0;

	int arr[n+1];
	arr[0] = -1;

	for(int i=1; i<=n; i++)
	{
		cin >> arr[i];
		if(arr[i]&1)
			odd++;
	}

	int eve = n-odd;

	int sum = min(even_available, odd) + min(odd_available, eve);
	cout << sum << "\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;
	while(t--)
	{
		solve();
	}
	

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}