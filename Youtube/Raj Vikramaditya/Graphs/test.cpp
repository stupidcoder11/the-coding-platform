#include <bits/stdc++.h>
using namespace std;

// adjacency list using map vector
// void solution()
// {
// 	map<int, vector<int>> graph;

// 	// n = #nodes, m = #edges
// 	int n, m;	cin >> n >> m;

// 	for(int i=0; i<m; i++)
// 	{
// 		// connected nodes {u,v}
// 		int u, v;	cin >> u >> v;

// 		graph[u].push_back(v);
// 		graph[v].push_back(u);
// 	}

// 	for(auto itr = graph.begin(); itr!=graph.end(); itr++)
// 	{
// 		int key = itr->first;
// 		vector<int> temp = itr->second;

// 		cout << key << " : ";
// 		for(auto num : temp)	cout << num << " ";
// 		cout << endl;
// 	}
// }

// Adjacency List using double vector
// void solution()
// {

// 	// n = #nodes, m = #edges
// 	int n, m;	cin >> n >> m;

// 	vector<vector<int>> adjList(n);


// 	for(int i=0; i<m; i++)
// 	{
// 		// connected nodes {u,v}
// 		int u, v;	cin >> u >> v;
// 		adjList[u].push_back(v);
// 		adjList[v].push_back(u);
// 	}

// 	for(int i=0; i<n; i++)
// 	{
// 		cout << i << " : ";
// 		for(int j=0; j<adjList[i].size(); j++)
// 			cout << adjList[i][j] << " ";
// 		cout << endl;
// 	}
// }


// Adjacency matrix
// void solution()
// {

// 	// n = #nodes, m = #edges
// 	int n, m;	cin >> n >> m;

// 	int adjMat[n][n];
// 	memset(adjMat, 0, sizeof(adjMat));


// 	for(int i=0; i<m; i++)
// 	{
// 		// connected nodes {u,v}
// 		int u, v;	cin >> u >> v;
// 		adjMat[u][v]=1;
// 		adjMat[v][u]=1;
// 	}

// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 			cout << adjMat[i][j] << " ";
// 		cout << endl;
// 	}
// }


void solution()
{

	// n = #nodes, m = #edges
	int n, m;	cin >> n >> m;

	vector<vector<int>> adjMat(n, vector<int>(n));

	for(int i=0; i<m; i++)
	{
		// connected nodes {u,v}
		int u, v;	cin >> u >> v;
		adjMat[u][v]=1;
		adjMat[v][u]=1;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<adjMat[i].size(); j++)
			cout << adjMat[i][j] << " ";
		cout << endl;
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

	return 0;
}