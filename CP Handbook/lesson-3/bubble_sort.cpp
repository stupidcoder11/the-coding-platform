#include <bits/stdc++.h>
using namespace std;

#define long long int

// Bubble sort is O(N^2) algorithm.
// In-place sorting algorithm.
// Stable sorting algorithm.
// Best time O(N) when array is already sorted.

/* It consists of N rounds where in each round the alorithm iterates through
   the elements of the array and whenever two consecutive elements are found
   that are not in correct order, the algorithm swaps them. */

/* After the first round of the algorithm, the largest element will be in the
   correct position, and in general, after k rounds, the k largest elements will
   be in the correct positions. Thus, after N rounds, the whole array is sorted. */

// This technique can also be done to find the kth largest element in O(N*k).

void solve()
{
   int n;   cin >> n;
   vector<int> arr(n,0);   for(int& itr: arr)   cin >> itr;

   for(int i=0; i<n; i++)        // The no. of rounds
      for(int j=0; j<n-1; j++)   // The inversion(s) removal via swap() if any
         if(arr[j]>arr[j+1])  
            swap(arr[j], arr[j+1]);

   cout << "Sorted array: \n";
   for(int itr: arr) cout << itr << " ";
   cout << "\n";
}

int32_t main()
{
   ios_base::sync_with_stdio(false);	cin.tie(0);

   int t;   cin >> t;
   while(t--)
   solve();

   return 0;
}