#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define dbg(x)                  cout << #x << " : " << x << "\n";
#define dbgarr(arr, n, idx)     for(int i=(int)idx; i<(int)n; i++)  cout << #arr << "[" << i << "] = " << arr[i] << "\n";

void solve()
{
    int t, l, r;
    set<int> s;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        s.insert(2*l);
        s.insert(2*r);
        for(int i=min(l,r);i<max(l,r);i++)
        s.insert(i);
        cout << s.size() << "\n";
        s.clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);   cin.tie(0);
    
    solve();

    return 0;
}