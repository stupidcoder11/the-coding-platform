/*	Author	: Devesh
	Motto	: Regular code makes the road!
	Link	: https://codeforces.com/problemset/problem/110/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function
void solve()
{
	string str;	cin >> str;
	int cnt = 0;

	for(char itr : str)	if(itr=='4' || itr=='7')	++cnt;

	/* Given that N ≤ 10^18 that means it has 18 digits at max &
	so only lucky no(s). under 18 are 4 and 7 hence the count
	should be equal to either of them for a number to be nearly
	lucky */
	cout << ((cnt==4 || cnt==7)?"YES\n":"NO\n");
}

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	solve();

	return 0;
}