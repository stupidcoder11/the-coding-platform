/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/START5C/problems/TOTCRT

*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<string, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
  
    // Print the sorted value
    for (auto& it : A)	cout << it.second << " ";

    cout << "\n";
}

void solution()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		map<string, int> mp;
		for(int i=0;i<3*n;i++)
		{
			string s;	cin >> s;
			int code;	cin >> code;
			if(mp.find(s)!=mp.end())
				mp[s]+=code;
			else
				mp[s]=code;
		}
		sort(mp);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	solution();

	return 0;
}
