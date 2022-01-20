/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/START5C/problems/CHEFQUER

*/

// My earlier Approach - Fail reason - Usage of pow(base,exp) for calculating x^x
// Lesson learnt - pow() function is costlier so always prefer x^x , x^x^x for small exp

// void solution()
// {
// 	ll n,q;	cin >> n >> q;

// 	ll arr[n];
// 	for(ll i=0;i<n;i++)	
// 		cin >> arr[i];

// 	while(q--)
// 	{
// 		ll num;	cin >> num;

// 		if(num == 1)
// 		{
// 			ll l, r, x;	cin >> l >> r >> x;

// 			for(ll i=l-1;i<r;i++)	
// 				// arr[i]+=(ll)pow((x+i+1-l),2);
// 				// pow function is costlier 
// 				// if you want to store the square of a number
// 				// simply use x*x instead of pow(x,2)
// 				arr[i]+=(x+i+1-l)*(x+i+1-l);
// 		}
// 		else
// 		{
// 			ll y;	cin >> y;

// 			cout << arr[y-1] << "\n";
// 		}
// 	}
// }


// Optimised Approach using FENWICK TREE
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " : " << x << endl;
typedef long long ll;

struct FenwickTree
{
	vector<ll> bit;
	ll n;

	FenwickTree(ll n)
	{
		this->n = n+1;
		bit.assign(n+1, 0LL);
	}

	void add(ll idx, ll val)
	{
		for(++idx; idx<n; idx+=idx & -idx)	bit[idx]+=val;
	}

	void range_add(ll l, ll r, ll val)
	{
		add(1, val);
		add(r+1, -val);
	}

	ll get(ll idx)
	{
		ll ret=0;
		for(++idx; idx>0LL; idx-= idx & -idx)	ret+=bit[idx];

		return ret;
	}
};

// (x+i-l)^2 = i^2 + (x-l)^2 + 2*i*(x-l)

void solution()
{
	ll n,q;	cin >> n >> q;

	FenwickTree ft1(n), ft2(n), ft3(n);

	vector<ll> arr(n);
	for(auto &x: arr)	cin >> x;

	while(q--)
	{
		ll num;	cin >> num;

		if(num == 1)
		{
			ll l, r, x;	cin >> l >> r >> x;
			ll y=x-l;
			l--;
			r--;

			ft1.range_add(l, r, 1LL);
			ft2.range_add(l, r, y*y);
			ft3.range_add(l, r, 2LL*y);
		}
		else
		{
			ll i;	cin >> i;

			cout << arr[i-1] + (i*i)*ft1.get(i) + ft2.get(i) + (i*ft3.get(i)) << "\n";
		}
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
