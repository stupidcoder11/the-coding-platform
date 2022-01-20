#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int capacity, int size)
{
    if(capacity == 0 || size==0)
        return 0;
    if(wt[size-1]<=capacity)
        return max(val[size-1]+knapsack(wt, val, capacity-wt[size-1], size-1), knapsack(wt, val, capacity, size-1));
    else 
        return knapsack(wt,val, capacity, size-1);
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
    
    int n, W, i;
    cin >> n >> W;
    int wt[n], val[n];
    for(i=0;i<n;i++)
    cin >> wt[i];
    for(i=0;i<n;i++)
    cin >> val[i];

    cout << knapsack(wt, val, W, n) << endl;

    return 0;
}