#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("error.txt", "w", stderr);
    // freopen("output.txt", "w", stdout); 
    // #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
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

    return 0;
}