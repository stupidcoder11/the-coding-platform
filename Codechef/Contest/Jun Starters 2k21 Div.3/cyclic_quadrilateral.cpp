/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/START5C/problems/CYCLICQD

*/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
	int t;	cin >> t;

	while(t--)
	{
		int a, b, c, d;	cin >> a >> b >> c >> d;

		if(a+c == 180 && b+d == 180)
			cout << "YES\n";
		else
			cout << "NO\n";
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
