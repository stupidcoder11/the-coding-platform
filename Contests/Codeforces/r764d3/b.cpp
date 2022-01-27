// https://codeforces.com/contest/1624/problem/B

#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{
	int a, b, c;	cin >> a >> b >> c;
	
	int ea = 2*b-c;			//	Expected value of a
	
	if(ea%a==0 && ea>=a) {
		cout << "YES\n";
		return;
	}
	
	int eb = a+(c-a)/2;		//	Expected value of b
	
	if(((a+c)&1)==0 && eb%b==0 && eb>=b) {
		cout << "YES\n";
		return;
	}
	
	int ec = 2*b-a;			//	Expected value of c
	
	if(ec%c==0 && ec>=c) {
		cout << "YES\n";
		return;
	}
	
	cout << "NO\n";		
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;
	while(t--)	solve();
	

	return 0;
}