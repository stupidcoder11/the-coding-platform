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
	vector<vector<int>> mat;
	vector<int> dummy;

	dummy = {3,3,1,1};	mat.push_back(dummy);
	dummy = {2,2,1,2};	mat.push_back(dummy);
	dummy = {1,1,1,2};	mat.push_back(dummy);

	map<int,vector<int>> uhmp;

	for(int i=0; i<mat.size(); i++)
	{
		for(int j=0; j<mat[i].size(); j++)
			uhmp[i-j].push_back(mat[i][j]);
	}

	for(auto itr = uhmp.begin(); itr!=uhmp.end(); itr++)
	{
		auto key = itr->first;
		auto v = itr->second;
		sort(v.begin(),v.end());
		cout << key << " : ";
		for(auto x: v)	cout << x << " ";
		cout << endl;
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
