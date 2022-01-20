/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://codeforces.com/problemset/problem/112/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//	Solution function
void solve()
{
    string a, b;    cin >> a >> b;
    
    // convert both of them to same case
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int ans = a.compare(b);

    if(ans<0)   ans = -1;
    else if(ans>0)  ans = 1;

    cout << ans << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}