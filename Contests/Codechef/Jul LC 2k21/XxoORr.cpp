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
#define for32(i,s,n)	for(int i=(int)s; i<=(int)n; i++);
#define for64(i,s,n)	for(ll i=(ll)s;i<=(ll)n;i++)
#define inp(i,a)		for(auto &x: a)	cin >> x;
#define op(i,a)			for(auto x: a)	cout << x << " ";
#define opln(i,a)		for(auto x: a)	cout << x << "\n";
#define newline			cout << "\n";
#define pb(x)			push_back(x);

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

void update(v32 &arr, int n)
{
	string bin = "";

	for(int i=n; i!=0; i/=2)	bin+=to_string(i%2);

	int j=31;

	for(int i=0; i<bin.length(); i++)
	{
		if(bin[i]=='1')	arr[j]++;

		j--;
	}
}

void solution()
{
	int t;	cin >> t;

	while(t--)
	{
		int n, k;	cin >> n >> k;

		v32 v(n), ans(32,0);

		int res = 0;

		inp(i,v);

		for(int i=0; i<n; i++)	update(ans,v[i]);

		for(int i=0; i<32; i++)
		{
			if(ans[i]>0)	res+=ceil(ans[i]/(float)k);
		}

		cout << res << "\n";
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
