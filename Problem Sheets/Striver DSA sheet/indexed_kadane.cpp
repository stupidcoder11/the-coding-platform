/*	Author	: Devesh
    Motto	: Regular code makes the road! */

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

/* 
The maximum sum subarray problem is the task of finding a contiguous 
subarray with the largest sum, within a given 1-D array A[1...n] of numbers.
Formally, the task is to find indices i and j with 1 ≤ i ≤ j ≤ n , such that 
the sum ∑A[x], i ≤ x ≤ j, is as large as possible. 

For example, for the array of values [−2, 1, −3, 4, −1, 2, 1, −5, 4], the 
contiguous subarray with the largest sum is [4, −1, 2, 1], with sum 6. 


Some properties of this problem are:

1) If the array contains all non-negative numbers, then the problem is trivial; 
a maximum subarray is the entire array.
2) If the array contains all non-positive numbers, then a solution is any 
subarray of size 1 containing the maximal value of the array (or the empty
subarray, if it is permitted).
3) Several different sub-arrays may have the same maximum sum. */

//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> arr(n); for(auto& itr : arr) cin >> itr;
    
    int curr = 0, ans = INT_MIN, curr_start = 0, start = 0, end = 0;

    for(int i=0; i<n; i++)
    {
        if(curr<=0)
        {
            curr = arr[i];
            curr_start = i;
        }
        else
            curr += arr[i];

        if(ans<curr)
        {
            ans = curr;
            start = curr_start;
            end = i;
        }
    }

    cout << "Max sum        : " << ans << "\n";
    cout << "Start index    : " << start << "\n";
    cout << "End index      : " << end << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}