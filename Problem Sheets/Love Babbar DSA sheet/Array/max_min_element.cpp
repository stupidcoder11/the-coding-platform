/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

struct Extreme
{
    int Max, Min;
};

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n);   for(int& itr : v)  cin >> itr;

    // via inbuilt max_element(), min_element()

    // __wrap_iter<int*> _max = max_element(v.begin(), v.end());
    // __wrap_iter<int *> _min = min_element(v.begin(), v.end());

    // cout << "Maximum : " << *_max << "\n";
    // cout << "Minimum : " << *_min << "\n";

    // via Comparing pair-wise method (best with minimum comparisions)
    Extreme e;
    int i;
    if(n&1) {
        e.Max = e.Min = v[0];
        i = 1;
    }
    else {
        e.Max = v[0];
        e.Min = v[1];
        i = 2;
    }

    while(i<n-1) {
        if(v[i]>v[i+1]) {
            e.Max = max(e.Max, v[i]);
            e.Min = min(e.Min, v[i+1]);
        }
        else {
            e.Max = max(e.Max, v[i+1]);
            e.Min = min(e.Min, v[i]);
        }
        i += 2;
    }

    cout << "Max : " << e.Max << "\n";
    cout << "Min : " << e.Min << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}