/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*
INPUT:
50
RRRRRRRRRRRRGGRRRRRRRRRBRRRRRRRRRRRRRRBBRRRRRRRRRR

OUTPUT:
43
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
	int n;	cin >> n;
	string s;	cin >> s;

	int ans=0;

	for(int i=0;i<n-1;i++)	if(s[i]==s[i+1])	ans++;

	cout << ans;

}