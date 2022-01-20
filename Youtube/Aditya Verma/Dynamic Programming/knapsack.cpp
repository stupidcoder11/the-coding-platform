#include <bits/stdc++.h>
using namespace std;

void solve();

int knapsack_fxn(int item[], int wt[], int size, int capacity)
{
    int _max=0;
    if(capacity==0 || size==)   return _max;
    int profit=item[size-1]*wt[size-1];
    _max=max(profit,_max);
    return (knapsack_fxn(item,wt,size-1,capacity-1);

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}
