/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://codeforces.com/problemset/problem/69/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Wrong solution (Common mistake)

/* void solve()
{
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(3));
    int sum = 0;

    for(vector<int>& outer: arr)
    for(int& itr: outer) {
        cin >> itr;
        sum += itr;
    }
    cout << ((sum == 0) ? "YES" : "NO") << "\n";
}
e.g.
3 
0 2 - 2 
1 - 1 3 
- 3 0 0 
Output YES 
Answer NO */


/* For N vectors to be in equilibrium, the algebraic sum of all the x, y
and z coordinates must be equal to zero */

// Solution function
void solve()
{
    int n; cin >> n;
    int x, y, z, xSum=0, ySum=0, zSum = 0;
    while(n--)
    {
        cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    cout << ((xSum==0 && ySum==0 && zSum==0)?"YES":"NO") << "\n";
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}