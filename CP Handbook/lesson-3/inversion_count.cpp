#include <bits/stdc++.h>
using namespace std;

#define long long int

/* A pair of array elements (arr[a], arr[b]) such that a<b and arr[a]>arr[b] is
called an inversion.*/

// The no. of inversions show how much work is needed to sort the array

void solve()
{
    int n;  
    cin >> n;
    int arr[n]; 
    memset(arr, 0, sizeof(arr));
    for(int& itr: arr)  cin >> itr;

    int cnt = 0, tot = 0;

    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                cnt += 1;
                tot++;
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << "Inversion count after round " << i << ": \n";
        cout << cnt << "\n";
        cnt = 0;
    }
    cout << "Total inversion : \n";
    cout << tot << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    int t;  cin >> t;
    while(t--)  solve();

    return 0;
}