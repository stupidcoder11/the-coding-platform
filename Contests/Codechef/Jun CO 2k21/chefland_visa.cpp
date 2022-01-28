/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

https://www.codechef.com/COOK130C/problems/VISA

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
	int t;	cin >> t;
	int x1, x2, y1, y2, z1, z2;
	while(t--)
	{
		cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

		cout << ((x2>=x1 && y2>=y1 && z2<=z1)?"YES":"NO") << "\n";
	}
}
