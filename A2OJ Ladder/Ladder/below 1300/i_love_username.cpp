/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://codeforces.com/problemset/problem/155/A	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

// Solution function

/*
void solve()
{
    int n;  cin >> n;
    vector<int> arr(n); for(int& itr: arr)  cin >> itr;

    int x = arr[0], y = arr[0];
    int ans = 0;
    
    for(int i=1; i<n; i++) {
        if(x>arr[i]) {
            x = arr[i];
            ++ans;
        }
        if(y<arr[i]) {
            y = arr[i];
            ++ans;
        }
    }
    cout << ans << "\n";
}*/


// Solution function (Optimised)
void solve() 
{
    int n;  cin >> n;
    int first;  cin >> first;
    int x = first, y = first, ans = 0;

    while(n>1) 
    {
        int ele;    cin >> ele;
        if(x>ele || y<ele)
        {
            ++ans;
            x = min(x, ele);
            y = max(y, ele);
        }
        --n;
    }
    cout << ans << "\n";
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}