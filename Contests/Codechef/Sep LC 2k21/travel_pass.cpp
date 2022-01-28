#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{
	int n, a, b;	cin >> n >> a >> b;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		char ch; cin >> ch;
		ans += (ch == '0')?a:b;
	}
	cout << ans << "\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;

	while(t--)	solve();
	

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}