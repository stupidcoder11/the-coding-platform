// https://codeforces.com/contest/1624/problem/A

#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{
	int n;	cin >> n;
	int _max = 1, _min = 1e9;
	while(n--)
	{
		int x;	cin >> x;
		_max = max(_max, x);
		_min = min(_min, x);
	}
	cout << _max-_min << "\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;
	
	while(t--)	solve();
		
	return 0;
}