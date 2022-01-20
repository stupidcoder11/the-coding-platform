/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://codeforces.com/problemset/problem/248/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function
void solve()
{
    int n;  cin >> n;    
    int N = n, cnt_open_left = 0, cnt_open_right = 0;

    /*  The left doors can all either be closed/open and similarly the
        right doors can all either be closed/ open so we need to find
        the minimum cost to get back to previous state i.e. the minimum
        cost to calculate all the left doors to be closed/open plus all 
        the right doors to be closed/open */

    while(n--)
    {
        int x, y;   cin >> x >> y;
        cnt_open_left += x;
        cnt_open_right += y;
    }

    int ans = min(cnt_open_left, N-cnt_open_left)+min(cnt_open_right, N-cnt_open_right);
    cout << ans << "\n";
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}