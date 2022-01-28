/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	
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

bool ischefora(ll n)
{
	string a = to_string(n);
	string b = string(a.rbegin(), a.rend());

	if(a==b && a.length()&1)	return true;

	return false;
}

void solution()
{

	ll n;	cin >> n;

	ll ans = 1;
	ll k = 1;
	while(ans<n)
	{
		if(ischefora(k))
		{
			++ans;
		}
		k++;
	}

	cout << k << endl;
	// string a = to_string(n);
	// string b = string(a.rbegin(), a.rend());

	// bool ans = (a==b && a.length()&1);
	// cout << ans << endl;

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
