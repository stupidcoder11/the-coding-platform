// ****************************************************************************
// 									INTRODUCTION
// ****************************************************************************

/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	https://www.codechef.com/AUG21C/problems/PROBDIFF
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

	int t;	cin >> t;

	while(t--)
	{
		int ans = -1;
		unordered_map<int,int> mp;
		unordered_set<int> s;

		for(int i=0; i<4; i++)
		{
			int x;	cin >> x;
			if(mp.find(x)!=mp.end())	s.insert(x);
			mp[x]++;
		}
        
        switch(mp.size())
        {
            case 1: ans=0; break;
            case 2: ans = s.size(); break;
            case 3: 
            case 4: ans = 2;
        }
        
		cout << ans << endl;
	}
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);
	
	solution();

	return 0;
}
