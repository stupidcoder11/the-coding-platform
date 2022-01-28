// Problem link: https://www.codechef.com/CDMN21B/problems/SUBMEDIA

#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code
void solve()
{
	int n, k;	cin >> n >> k;
	vector<int> arr(n);	// contains n distinct integers

	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		mp[arr[i]] = i;	// remembers the index in original array
	}

	if(k == 1)	// if one length
	{
		cout << arr[n-1] << "\n";	// print median
		cout << arr[n-1] << "\n";	// print subsequence
	}
	else
	{
		vector<int> cpy(arr);
		sort(cpy.begin(), cpy.end());

		// for(auto itr: cpy)	cout << itr << " ";
		// 	cout
		int idx = n - (k/2 + 1);

		int includeElement = cpy[idx];

		int originalIndex = mp[includeElement];

		cout << includeElement << "\n";	// print median

		// print subsequence
		if(originalIndex>0 && originalIndex<n-1)
		{
			for(int i=originalIndex; i<n && k>=0; i++, k--)
			cout << arr[i] << " ";
			// for(int i = originalIndex+1; idx>0 && k>=0; i--, k--)
			// cout << arr[i] << " ";
			// cout << "\n";
		}
		// if(originalIndex == n-1)
		// {
		// 	for(int i=0; i<n && k>1; i++, k--)
		// 		cout << arr[i] << " ";
		// 	cout << includeElement << " ";
		// }
		// else
		// {
		// 	cout << includeElement << " ";
		// 	for(int i=1; i<n && k>1; i++, k--)
		// 		cout << arr[i] << " ";
		// }
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