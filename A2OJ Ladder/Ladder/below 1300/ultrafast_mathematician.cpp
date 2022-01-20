/*	Author	: Devesh
	Motto	: Regular code makes the road!
	Link	: https://codeforces.com/problemset/problem/61/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function
void solve()
{
	string x, y;	cin >> x >> y;
	for(int i=0; i<x.length(); i++)	cout << (x[i]^y[i]);
	cout << "\n";
}

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	solve();

	return 0;
}