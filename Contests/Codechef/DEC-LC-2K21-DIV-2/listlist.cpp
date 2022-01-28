#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code


/*

Try 1:	Wrong

void solve()
{
	int n;	cin >> n;
	int arr[n];	memset(arr, 0, sizeof(arr));
	for(auto& itr : arr)	cin >> itr;

	// if solution not possible then o/p is -1 hence it is initializing value
	int ans = -1;

	if(n == 1)
		ans = 0;
	else
	{
		sort(arr, arr+n);
		for(int i=1; i<n; i++)
		{
			if(arr[i-1] == arr[i])
			{
				ans = n-1;
				break;
			}
		}
	}

	cout << ans << "\n";
}
*/

// Try 4 : Right
void solve()
{
	int n;	cin >> n;
	int arr[n];	memset(arr, 0, sizeof(arr));
	for(auto& itr : arr)	cin >> itr;

	unordered_map<int, int> ump;
	int ans = -1, maxf = 0;

	for(int itr : arr)	
	{
		ump[itr]++;
		maxf = max(maxf, ump[itr]);
	}

	int N = ump.size();	// total keys

	if(N == 1)	// if only one element is present then 0 operation
		ans = 0;
	else if (N<n)	// if all elements are not distinct
		ans = n-maxf+1;

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

	return 0;
}