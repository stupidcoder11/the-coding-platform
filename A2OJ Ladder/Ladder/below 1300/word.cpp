/*	Author	: Devesh
	Motto	: Regular code makes the road!
	Link	: https://codeforces.com/problemset/problem/59/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function
void solve()
{
	string str;	cin >> str;
	int flag = 0;

	for(char itr : str) {
		if(isupper(itr))
			flag++;
		else
			flag--;
	}

	if(flag>0)	
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	else
		transform(str.begin(), str.end(), str.begin(), ::tolower);

	cout << str << "\n";
}

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	solve();

	return 0;
}