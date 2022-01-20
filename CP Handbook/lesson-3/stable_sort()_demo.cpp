#include <bits/stdc++.h>
using namespace std;

#define long long int

struct Interval
{
    int start, end;
};

void show(Interval arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "{" << arr[i].start << ", " << arr[i].end << "}";
        if(i<n-1)
        cout << " ";
    }
}

bool cmp(Interval x, Interval y)
{
    return x.end<y.end;
}

// stable_sort() maintains the relative order of the elements
// stable_sort() can be manipulated by the help of comparator()

/* stable_sort() is preferred over sort() when we want to make sure that the order of
the elements is same in sorted array as in it was in the original array. This can be 
useful if these values have associated other fields. */

void solve()
{
    Interval arr[] = {{1, 3}, {2, 19}, {1, 5}, {2, 4}, {3, 2}};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Interval structure before stable sorting :\n";
    show(arr, n);
    cout << "\n";

    stable_sort(arr, arr+n, cmp);

    cout << "Interval structure after stable sorting (on basis of end time):\n";
    show(arr, n);
    cout << "\n";
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

   return 0;
}