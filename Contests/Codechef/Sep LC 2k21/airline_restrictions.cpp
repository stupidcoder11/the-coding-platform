#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{

	int a, b, c, d, e;	cin >> a >> b >> c >> d >> e;

	if((a<=e && (b+c)<=d) || (b<=e && (a+c)<=d) || (c<=e && (a+b)<=d))
		cout << "Yes\n";
	else
		cout << "No\n";
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