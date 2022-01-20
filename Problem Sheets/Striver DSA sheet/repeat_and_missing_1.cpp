/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n);   for(auto& itr : v)  cin >> itr;

    pair<int, int> ans = {0,0};
    unordered_map<int, bool> ump;


    // finding repeated number
    for(auto itr : v)
    {
        if(ump.find(itr) == ump.end())
        ump[itr] = true;
        else
        ans.first = itr;
    }


    // find missing number
    for(int key=1; key<=n; key++)
    {
        if(ump.find(key) == ump.end())
        {
            ans.second = key;
            break;
        }
    }

    cout << ans.first << ", " << ans.second << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}