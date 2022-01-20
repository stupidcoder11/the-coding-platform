/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/600/B

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
	int n,m;	cin >> n >> m;

	vector<int> a(n), b(m);
	for(int i=0;i<n;i++)	cin >> a[i];

	for(int i=0;i<m;i++)	cin >> b[i];

	sort(a.begin(), a.end());
	
	for(int num: b)
	{
		int ans=upper_bound(a.begin(),a.end(),num)-a.begin();
		cout << ans << " ";
	}

}