#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n, m;	cin >> n >> m;

	int graph[n+1][n+1];

	memset(graph, 0, sizeof(graph));

	for(int i=0; i<m; i++)
	{
		int u, v;	cin >> u >> v;

		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	for(int i=1; i<n+1; i++)
	{
		for(int j=1; j<n+1; j++)
		{
			if(graph[i][j])
				cout << i << " - " << j << ", ";
		}
		cout << endl;
	}

	return 0;
}