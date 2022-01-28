// ****************************************************************************
// 									INTRODUCTION
// ****************************************************************************

/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	https://www.codechef.com/JULY21C/problems/MINNOTES
*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

#define	deb(x)	cout << #x << " : " << x << endl;

typedef long long ll;

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

bool cmp(ll x, ll y)
{
	return x>y;
}

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a, a);
}

void solution()
{
	ll t;	cin >> t;
	while(t--)
	{
		ll n;	cin >> n;


		ll arr[n], prefix[n], suffix[n];

		for(ll i=0; i<n; i++)		cin >> arr[i];


		if(n<3)
		{
			cout << n << "\n";
			continue;
		}


		sort(arr, arr+n, cmp);

		prefix[0] 	= arr[0];
		suffix[n-1] = arr[n-1];

		for(ll i=1; i<n; i++)		prefix[i] = gcd(arr[i],prefix[i-1]);

		for(ll i=n-2; i>=0; i--)	suffix[i] = gcd(arr[i],suffix[i+1]);

		ll max_gcd = 1, idx = 0, hcf=1;

		for(ll i=0; i<n; i++)
		{
			if(i==0)				hcf = suffix[i+1];
			else if(i==n-1)			hcf = prefix[i-1];
			else					hcf = gcd(prefix[i-1],suffix[i+1]);

			if(max_gcd<hcf)
			{
				max_gcd = hcf;
				idx = i;
			}
		}

		arr[idx] = max_gcd;
		ll ans = 0;

		for(ll i=0; i<n; i++)		ans = ans + (arr[i]/max_gcd);

		cout << ans << "\n";


	}
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	
	solution();

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}
