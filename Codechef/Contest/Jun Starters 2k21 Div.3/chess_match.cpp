/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/START5C/problems/BLITZ3_2

*/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
	int t;	cin >> t;

	while(t--)
	{
		int n, a, b;	cin >> n >> a >> b;
		cout << 2*(180+n)-(a+b) << "\n";
	}
}

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
