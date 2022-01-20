#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

int main()
{
	// File I/O
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	// Fast I/O
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	// My Code
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int ans = 0;
		
		for(int c = 1; c <= n/2; c++)
			for(int b = c; b <= n; b += c)
				for(int a = c; a <= n; a += b)
					if(a%b == c)
						ans++;


		cout << ans << "\n";
	}

	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}