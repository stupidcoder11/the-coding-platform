/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------


//  Helper functions
void reversal_via_recursion(int arr[], int l, int r)
{
    if(l>r) return;
    swap(arr[l], arr[r]);
    reversal_via_recursion(arr, l+1, r-1);
}

void show_array(int arr[], int n)
{
    for(int i=0; i<n; i++)  cout << arr[i] << " ";
    cout << "\n";
}

//	Solution function
void solve()
{
    int n;  cin >> n;
    int arr[n]; memset(arr, 0, sizeof(arr));

    for(int& itr : arr) cin >> itr;

    // reversal via two pointer tech.

    // int i=0, j=n-1;
    // while(i<j)  swap(arr[i++], arr[j--]);

    // reversal using inbuilt reverse()

    // reverse(arr, arr+n);

    reversal_via_recursion(arr, 0, n-1);

    show_array(arr, n);
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}