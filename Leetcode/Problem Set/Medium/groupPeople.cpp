// ****************************************************************************
// 									INTRODUCTION
// ****************************************************************************

/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	
*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

void solution()
{
	vector<int> groupSize = {2,1,3,3,3,2};

	unordered_map<int, vector<int>> hmp;

	for(int i=0; i<groupSize.size(); i++)
	{
		hmp[groupSize[i]].push_back(i);
	}

	vector<vector<int>> ans;

	// for(auto itr = hmp.begin(); itr!=hmp.end(); itr++)
	// {
	// 	cout << itr->first << " : ";
	// 	for(auto x : itr->second)
	// 		cout << x << " ";
	// 	cout << "\n";
	// }

	// vector<vector<int>> ans;

	// auto itr = hmp.begin();

	// while(itr!=hmp.end())
	// {
	// 	vector<int> temp;
	// 	vector<int> v = itr->second;
		// int key = itr->first;

		// if(v.size()>key)
	// 	for(int j=0; j<v.size(); j++)
	// 	{
	// 		temp.push_back(v[j]);
	// 		if(temp.size()==itr->first)
	// 		{
	// 			ans.push_back(temp);

	// 			temp.clear();
	// 		}
	// 	}
	// }

	// vector<int> test = hmp[3];

	// int k=0;
	// for(int i=1; i<=test.size()/3; i++)
	// {
	// 	for(int j=0; j<test.size() && j<3; j++)
	// 		cout << test[k++] << " ";
	// 	cout << "\n";

	// }

	for(auto itr = hmp.begin(); itr!=hmp.end(); itr++)
	{
		int key = itr->first;
		vector<int> v = itr->second;

		if(v.size()<=key)
			ans.push_back(v);
		else
		{
			// int k=0;
			// vector<int> temp;

			// for(int i=0; i<v.size()/k; i++)
			// {
			// 	for(int j=0; j<k; j++)
			// 		temp.push_back(v[k++]);
			// 	ans.push_back(temp);
			// }

			for(int i=0; i<v.size();)
			{
				vector<int> temp;
				for(int j=0; j<key; j++)
					temp.push_back(v[i++]);
				ans.push_back(temp);
			}
		}
	}

	for(int i=0; i<ans.size(); i++)
	{
		cout << "[";
		for(auto itr: ans[i])
			cout << itr << ",";
		cout << "]";
	}
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

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
