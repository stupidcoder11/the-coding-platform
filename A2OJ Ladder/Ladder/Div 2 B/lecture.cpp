/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/499/B

*/

#include <bits/stdc++.h>
using namespace std;

void solution();

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

void solution()
{
	int n, m;	cin >> n >> m;

	unordered_map <string, string> ump;

	while(m--)
	{
		string a, b;
		cin >> a >> b;
		if(a.length()<=b.length())
			ump[b]=a;
		else
			ump[a]=b;
	}

	while(n--)
	{
		string a;
		cin >> a;

		if(ump.find(a)!=ump.end())
			cout << ump[a] << " ";
		else
			cout << a << " ";
	}
}