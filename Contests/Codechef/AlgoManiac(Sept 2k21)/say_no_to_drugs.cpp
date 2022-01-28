// Problem link: https://www.codechef.com/CDMN21B/problems/NODRUGS

#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code
void solve()
{
	int n, k, l;	cin >> n >> k >> l;
	vector<int> arr(n);	// speed of each player

	int maxSpeed = 1;

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		if(i < n-1)
		maxSpeed = max(maxSpeed, arr[i]);
	}

	if(n == 1)
	{
		cout << "Yes\n";
	}
	else
	{
		// cases - if nth player has max speed

		if(arr[n-1]>maxSpeed)
			cout << "Yes\n";
		else
		{
			if(k <= 0)			// if drug has side effects
				cout << "No\n";
			else
			{
				int maxChange = (l-1)*k;
				int newSpeed = arr[n-1]+maxChange;

				if(newSpeed > maxSpeed)
					cout << "Yes\n";
				else
					cout << "No\n";
			}
		}
	}
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