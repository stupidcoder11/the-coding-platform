#include <bits/stdc++.h>
using namespace std;

#define long long int

/* This is optimised bubble sort in the sense that if the there are no inversions
left in the array then the algorithm stops*/

void solve()
{
    cout << "Enter array size : \n";
    int n;  
    cin >> n;

    int arr[n];
    memset(arr, 0, sizeof(arr));
    cout << "Enter the elements :\n";
    for(int& itr : arr)
    cin >> itr;

    for(int i=0; i<n; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!(swapped))
            break;
    }
    
    cout << "Sorted array :\n";
    for(int itr: arr)   cout << itr << " ";
    cout << "\n";
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    cout << "Enter the test cases : \n";
    int t;
    cin >> t;

    while(t--)
    solve();

   return 0;
}