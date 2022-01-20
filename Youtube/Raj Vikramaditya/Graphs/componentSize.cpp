#include <bits/stdc++.h>
using namespace std;

void bfs(int n, vector<int> adjlist[], vector<int> &vis)
{
	queue<int> q;
	q.push(n);
	vis[n] = 1;

	while(q.empty() == false)
	{
		int node = q.front();
		q.pop();

		for(auto itr: adjlist[node])
		{
			if(vis[itr] == 0)
			{
				q.push(itr);
				vis[itr] = 1;
			}
		}
	}
}

void solve(int n, vector<int> adjlist[])
{
	vector<int> vis(n+1, 0);	// marks the visited vertex/node

	int count = 0;				// connected components

	for(int i=1; i<=n; i++)
	{
		if(vis[i] == 0)
		{
			bfs(i, adjlist, vis);
			count++;
		}
	}

	cout << count << "\n";
}

// Driver function
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// Input
	int n, m;	cin >> n >> m;

	vector<int> adjlist[n+1];

	for(int i=0; i<=m; i++)
	{
		int u, v;	cin >> u >> v;
		adjlist[u].push_back(v);
		adjlist[v].push_back(u);
	}

	solve(n, adjlist);

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}