#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";

// .......................................................................................................

// My code

void dfs(int n, vector<int> adjlist[], vector<int> &vis, vector<int> &storeDfs)
{
	storeDfs.push_back(n);	// add the node in final ans
	vis[n] = 1;				// mark the node as visited so that when it appears in the adjacency list we don't have to traverse it again

	// now check out adjacency list of the node and repeat
	for(auto itr: adjlist[n])
	{
		if(vis[itr] == 0)
			dfs(itr, adjlist, vis, storeDfs);
	}
}

void solve(int n, vector<int> adjlist[])
{
	vector<int> storeDfs;	// stores dfs traversal
	vector<int> vis(n+1,0);	// marks visited nodes

	for(int i=1; i<=n; i++)	// use for loop because graph may have component(s)
	{
		if(vis[i] == 0)	// if the node is not visited then...
		{
			dfs(i, adjlist, vis, storeDfs);
		}
	}

	// finally output the dfs content from storeDfs
	for(auto itr: storeDfs)	cout << itr << " ";
	cout << "\n";
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	int n, m;	cin >> n >> m;
	vector<int> adjlist[n+1];	// 1-based indexing

	// create adjacency list

	for(int i=0; i<m; i++)
	{
		int u, v;	cin >> u >> v;
		adjlist[u].push_back(v);
		adjlist[v].push_back(u);
	}

	// dfs(n, adjlist);
	solve(n, adjlist);	
	
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}