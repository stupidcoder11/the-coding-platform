/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://leetcode.com/problems/sort-colors/	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n);

    for(int& itr : v)   cin >> itr;

    // Dutch National Flag algorithm (Three color sorting)
    int lb=0, ub=n-1, mid=0;
    while(mid<=ub)
    {
        if(v[mid]==0)
        {
            swap(v[mid], v[lb]);
            mid++;
            lb++;
        }
        else if(v[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(v[mid],v[ub]);
            ub--;
            // don't do mid++ over here
        }
    }

    // via switch case
    /*
    while(mid<=ub)
    {
        switch(v[mid])
        {
            case 0: 
            swap(v[mid], v[lb]);
            mid++;
            lb++;
            break;
            
            case 1:
            mid++;
            break;

            case 2:
            swap(v[mid], v[ub]);
            ub--;
        }
    }*/

    for(const int itr : v)
        cout << itr << " ";
    cout << "\n";
}
/*
test-case:

3
1 2 0

output : 0 1 2
*/

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}