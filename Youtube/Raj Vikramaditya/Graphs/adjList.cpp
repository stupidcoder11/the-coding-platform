#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// My code

	int n, m;	cin >> n >> m;

	vector<int> graph[n+1];

	for(int i=0; i<m; i++)
	{
		int u, v;	cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// display adjacency list
	for(int i=1; i<=n; i++)
	{
		cout << i << ": ";
		for(auto itr: graph[i])	cout << itr << " ";
		cout << endl;
	}

	return 0;
}