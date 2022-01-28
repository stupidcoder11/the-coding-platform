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

	// Bruteforce approach result : TLE

	// int t;	cin >> t;
	// while(t--)
	// {
	// 	int n, p, k;	cin >> n >> p >> k;
	// 	int ans = 1;
	// 	bool flag = false;
	// 	for(int i=0; i<n; i++)
	// 	{
	// 		// dbg(i);
	// 		for(int j=i; j<n; j+=k)
	// 		{
	// 			// cout << j << "%" << k << " = " << j%k << endl;
	// 			if(j == p)
	// 			{
	// 				flag = true;
	// 				break;
	// 			}
	// 			else
	// 				ans += 1;

	// 		}
	// 		// dbg(ans);
	// 		if(flag)
	// 			break;
	// 	}
	// 	cout << ans << endl;
	// }

	// Optimised approach result : AC
	int t;	cin >> t;
	while(t--)
	{
		int n, p, k;	cin >> n >> p >> k;

		int ans = 0;

		int rem = p%k;

		int y = (n-1) - ((n-1)/k * k);

		// calculate for p%k - 1 in O(1)

		if(rem > y)		ans = (n-1)/k * rem + y + 1;
		else			ans = ((n-1)/k + 1) * rem;

		// finally calculate for p%k in O(N/k)

		for(int i = p%k; i <n && i != p; i += k) ans++;

		ans += 1;

		cout << ans << endl;
	}

	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}