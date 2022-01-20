/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/447/B

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
	string s;	cin >> s;

	int k;	cin >> k;
	
	int l=s.length();

	int w[26];
	int lrgst=-1;
	for(int i=0;i<26;i++)	
	{
		cin >> w[i];
		lrgst=max(lrgst,w[i]);
	}

	int sum=0;

	for(int i=0;i<l;i++)
		sum+=w[s[i]-'a']*(i+1);

	sum+=((k+l)*(k+l+1)/2-l*(l+1)/2)*lrgst;

	cout << sum << "\n";
}