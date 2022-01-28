#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code
void solve()
{
	int n;	cin >> n;
	string str;	cin >> str;

	int a, b;	cin >> a >> b;

	vector<pair<int, int>> vp;

	for(int i=0; i<n; i++)
	{
		if(str[i] == 'W')
			vp.push_back(make_pair(0, min(2*a, 2*b)));
		else if(str[i] == 'E')
			vp.push_back(make_pair(min(2*a, 2*b), 0));
		else if(str[i] == 'N')
			vp.push_back(make_pair(min(3*a, b), min(a, 3*b)));
		else
			vp.push_back(make_pair(min(a,3*b), min(b, 3*a)));
	}

	int prefix[n], suffix[n];
	prefix[0] = vp[0].second;
	suffix[n-1] = vp[n-1].first;

	for(int i=0; i<n; i++)	prefix[i] = vp[i].second + prefix[i-1];

	for(int i=n-2; i>=0; i--)	suffix[i] = vp[i].first + suffix[i+1];

	int ans = min(suffix[0], prefix[n-1]);

	for(int i=0; i<n-1; i++)	ans = min(ans, (prefix[i]+suffix[i+1]));	

	cout << ans << "\n";
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

	return 0;
}