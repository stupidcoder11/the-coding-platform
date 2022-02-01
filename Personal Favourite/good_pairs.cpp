//	Link - https://leetcode.com/problems/number-of-good-pairs/
//  Hint - Try to reduce the problem to O(nlogn) 
#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << ": " << x << "\n";
#define dbgarr(a, n, idx)	for(int i=0; i<(int)n; i++) cout << #a << "[" << i << "] = " << a[i] << "\n";
typedef long long int ll;

//	Solution function
void solve(int arr[], int n)
{
    int ans=0;

    unordered_map<int,int> ump;
    for(int i=0; i<n; i++)
    ump[arr[i]]++;

    for(auto itr : ump)
    ans+=itr.second*(itr.second-1) >> 1;

    cout << ans << "\n";
}

//	Driver function
int main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    //	Input goes here
    int n;
    cin >> n;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    for(int& itr : arr)
    cin >> itr;

    solve(arr, n);
    
    return 0;
}