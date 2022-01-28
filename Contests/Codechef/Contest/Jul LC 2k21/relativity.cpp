/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	https://www.codechef.com/JULY21C/submit/RELATIVE
*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

// ****************************************************************************
// 								TYPENAMES & MACROS
// ****************************************************************************

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<char> vch;
typedef vector<bool> vbool;
typedef pair<ll, ll> p;
typedef vector<p> vp;


#define deb(x)			cout << #x << " : " << x << "\n";
#define for32(i,s,n)	for(int i=s;i<=(int)n;i++);
#define for64(i,s,n)	for(ll i=s;i<=(ll)n;i++)
#define inp(i,a)		for(auto &x: a)	cin >> x;
#define op(i,a)			for(auto x: a)	cout << x << " ";
#define opln(i,a)		for(auto x: a)	cout << x << "\n";
#define newline			cout << "\n";
#define pb(x)			push_back(x);

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

void solution()
{
	int t;	cin >> t;
	while(t--)
	{
		int g, c;	cin >> g >> c;

		cout << c*c/(2*g) << "\n";
	}
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

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
