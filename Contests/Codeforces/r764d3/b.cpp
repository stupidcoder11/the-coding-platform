#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code
void solve()
{
	int a, b, c;	cin >> a >> b >> c;
	
	int eb = (a+c)>>1;
	int ea = 2*b-c;
	int ec = 2*b-a;
	
	if((a+c)&1)			// if expected b is non-integer
	{
		// cout << "ODD extreme\n";
		// dbg(ea);
		// cout << "eb : " << (a+b)/2.0 << "\n";
		// dbg(ec);
		if(ea%a == 0 && ea/a > 0)
			cout << "YES\n";
		else if(ec%c == 0 && ec/c > 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else				// if expected b is integer
	{
		// cout << "EVEN extreme\n";
		// dbg(ea);					
		// dbg(eb);
		// dbg(ec);
		if(ea%a == 0 && ea/a > 0)
			cout << "YES\n";
		else if(ec%c == 0 && ec/c > 0)
			cout << "YES\n";
		else if(eb%b == 0 && eb/b > 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
		
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