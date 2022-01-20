/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: 	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n);   for(int& itr : v) cin >> itr;
    int k;  cin >> k;

    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int itr: v)   minheap.push(itr);

    while(k>1) {
        minheap.pop();
        k--;
    }
    cout << minheap.top() << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}