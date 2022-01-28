#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

// MY CODE 
void solve()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = 0;

		for (int c = 1; c <= n / 2; c++)
			for (int b = c; b <= n; b += c)
				for (int a = c; a <= n; a += b)
					if (a % b == c)
						ans++;
						
		cout << ans << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);	

	solve();

	return 0;
}