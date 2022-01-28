/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/LTIME97C/problems/REALBIN

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solution()
{
	int t;	cin >> t;
	while(t--)
	{	
		// just need to check if the initial value of
		// 'b' is a power of '2' or not
		ll a,b;	cin >> a >> b;
		
		cout << ((b&(b-1ll))?"No\n":"Yes\n");
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
