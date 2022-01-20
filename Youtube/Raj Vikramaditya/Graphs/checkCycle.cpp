#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code

bool bfs(int n, vector<int> adjList[], vector<int> &vis)
{
	queue<pair<int,int>> q;				// node and parent node
	q.push({n,-1});						// starting node has -1 as parent
	vis[n] = 1;							// mark the node as visited

	while(q.empty() == false)
	{
		int node = q.front().first;
		int parent = q.front().second;

		q.pop();

		for(auto itr: adjList[node])	// visited all the adjacent nodes
		{
			if(vis[itr] == 0)			// if not visited then...
			{
				q.push({itr, node});		// push adjacen node & the new parent node in queue
				vis[itr] = 1;			// mark node as visited
			}
			else
			{
				if(itr != parent)		// if the node is visited adjacent node is not parent node
					return true;		// the graph is cyclic
			}
		}
	}
	return false; 						// otherwise graph is acyclic
}

void solve(int n, vector<int> adjList[])
{	
	vector<int> vis(n+1,0);		// visited vector initially set to 0

	for(int i=1; i<=n; i++)
	{
		if(vis[i] == 0)		// if the node is unvisited then...
		{
			bool ans = bfs(n, adjList, vis);
			if(ans == true)
			{
				cout << "Cyclic\n";
				return;
			}
		}
	}
	cout << "Acyclic\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int n, m;					// n nodes and m edges
	cin >> n >> m;

	vector<int> adjList[n+1];	// adjacency list 1-based index

	for(int i=0; i<m; i++)		// input m edges
	{
		int u, v;				// connected vertices/nodes
		cin >> u >> v;

		// create adjacency list
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	solve(n,adjList);
	

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}