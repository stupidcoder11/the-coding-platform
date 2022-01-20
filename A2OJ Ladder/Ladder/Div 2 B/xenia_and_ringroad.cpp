/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/339/B

*/

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << "#x : " << x << "\n";

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
	long long n, m;	cin >> n >> m;

	long long arr[m];

	for(long long i=0;i<m;i++)	cin >> arr[i];

	// My code

	long long ans=arr[0]-1;


	for(long long i=1;i<m;i++)
	ans+=(arr[i]>=arr[i-1])?(arr[i]-arr[i-1]):(n-(arr[i-1]-arr[i]));


	cout << ans << "\n";

}