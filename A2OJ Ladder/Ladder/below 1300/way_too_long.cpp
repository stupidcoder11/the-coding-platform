/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://codeforces.com/problemset/problem/71/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//	-----------------------------------------------------------------------

//	Solution function
void solve()
{
    int n;  cin >> n;
    while(n--)
    {
        string str; cin >> str;
        int len = str.length();
        if(len>10)
            cout << str[0]+to_string(len-2)+str[len-1] << "\n";
        else
            cout << str << "\n";
    }
}

//	-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}