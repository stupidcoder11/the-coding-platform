// Problem link: https://www.codechef.com/CDMN21B/problems/SUBMEDIA

#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code
void solve()
{
	int n, k;	cin >> n >> k;
	vector<int> arr(n);

	for(auto& itr: arr)	cin >> itr;

	priority_queue<pair<int, int>> _pq;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> _qp;

	for(int i=0; i<n; i++)	_pq.push(make_pair(arr[i],i));

	vector<int> v;
	int flag = 0;
	while(flag < k)
	{
		pair<int,int> pair_int = _pq.top();
		_pq.pop();

		_qp.push(make_pair(pair_int.second, pair_int.first));
		v.push_back(pair_int.first);
		flag++;
	}

	vector<int> res;
	while(!_qp.empty())
	{
		res.push_back(_qp.top().second);
		_qp.pop();
	}
	reverse(v.begin(), v.end());

	// print median
	if(v.size()&1)	cout << v[v.size()/2];
	else			cout << v[v.size()/2 - 1];

	cout << "\n";
	// print subsequence
	for(auto itr: res)	cout << itr << " ";
	cout << "\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int t;	cin >> t;
	while(t--)
	{
		solve();
	}
	
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}