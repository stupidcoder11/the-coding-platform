#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

ll getGCD(ll a, ll b)
{
	if(b == 0)	return a;
	return getGCD(b,a%b);
}


int main()
{
	// File I/O
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	// Fast I/O
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);



	// My Code
	ll t;	cin >> t;
	while(t--)
	{
		ll n, m;	cin >> n >> m;

		ll sum = 0;
		vector<pair<ll,ll>> vp;

		for(ll i=0; i<m; i++)
		{
			ll x, y;	cin >> x >> y;
			vp.push_back({x,y});
		}

		sort(vp.begin(),vp.end(),greater<pair<ll,ll>>());

		ll lcm = 1, rem = n;

		for(auto& itr : vp)
		{
			if(rem<=0)	break;
			ll key = itr.first;
			ll val = itr.second;

			lcm = (lcm*val)/getGCD(lcm,val);


			sum += (rem-n/lcm)*key;

			rem = n/lcm;
		}
		
		cout << sum << "\n";
	}



	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}