/*	Author	: Devesh
	Motto	: Regular code makes the road!
	Link	: http://codeforces.com/problemset/problem/271/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

// Helper function
bool is_beautiful(int yy)
{
	// to check if we get a unique year with all digits distinct we use 
	// unordered_set data structure
	unordered_set<int> us;
	for(int i=yy; i>0; i/=10)
		us.insert(i%10);
	
	// as per question 1000 ≤ y ≤ 9000 so the size of the unordered_set
	// should be equal to 4(here) in case of unique no. / beautiful no.
	return us.size()==4;
}

//	Solution function
void solve()
{
	int n;	cin >> n;

	int ans = n+1;
	while(!is_beautiful(ans))	ans++;
	
	cout << ans << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	solve();

	return 0;
}