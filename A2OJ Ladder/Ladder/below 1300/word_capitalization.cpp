/*	Author	: Devesh
	Motto	: Regular code makes the road!
	Link	: https://codeforces.com/problemset/problem/281/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function
void solve()
{
	string str;	cin >> str;
	if(islower(str[0]))	str[0] = toupper(str[0]);
	cout << str << "\n";
}

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	solve();

	return 0;
}