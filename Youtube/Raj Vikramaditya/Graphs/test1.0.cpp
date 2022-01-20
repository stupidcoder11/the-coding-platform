#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> getbfs(int n, vector<vector<int>> graph)
	{
		vector<int> bfs;
		// int sum = 0;
		bool visited[n+1];
		memset(visited,false,sizeof(visited));

		for(int i=1; i<=n; i++)
		{
			if(!visited[i])
			{
				visited[i] = true;
				queue<int> q;
				q.push(i);

				while(!q.empty())
				{
					int node = q.front();
					q.pop();
					bfs.push_back(node);
					for(auto itr: graph[node])
					{
						if(!visited[itr])
						{
							visited[itr] = true;
							q.push(itr);
						}
					}
				}
			}
		}

		return bfs;
	}
};

int main()
{

	Solution obj;

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// My Code 
	int n, m;	cin >> n >> m;

	vector<vector<int>> graph(n+1);

	for(int i=0; i<m; i++)
	{
		int u, v;	cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	vector<int> ans = obj.getbfs(n, graph);

	for(auto itr: ans)	cout << itr << " ";

	return 0;
}