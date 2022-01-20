/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//  Think in terms of frequency array

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n); for(auto& itr : v)    cin >> itr;

    pair<int, int> ans = {0,0};

    vector<int> arr(n+1, 0);
    for(int i=0; i<n; i++)  arr[v[i]]++;

    for(int key=1; key<=n; key++)   // the loop are keys instead of indices
    {
        if(arr[key] == 2)
        ans.first = key;
        if(arr[key] == 0)
        ans.second = key;
    }

    // ans.first = repeated no. and ans.second = missing no.
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