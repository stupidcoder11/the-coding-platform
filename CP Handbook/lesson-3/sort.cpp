#include <bits/stdc++.h>
using namespace std;

#define long long int

void show(vector<int> arr){
    for(int itr: arr)   cout << itr << " ";
    cout << "\n";
}
void show(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}

void show(string str){
    cout << str << "\n";
}

bool cmp(int x, int y) {
    return x>y;
}

void solve()
{
    vector<int> v = {1,3,2,5,6,-1,12};
    string str = "Jinx_11";
    int arr[] = {0,12,4,124,-1,25};
    int n = sizeof(arr)/sizeof(arr[0]);

    // sort() functions resides in "algorithm" header file
    // sort() has time complexity of O(NlogN) in all cases

    /* sort() generally has two templates:
    1) sort(first, second) &, 
    2) sort(first, second, comparator) */

    cout << "Before sorting : \n\n";

    cout << "Vector : \n";
    show(v);
    cout << "Array: \n";
    show(arr,n);
    cout << "String : \n";
    show(str);

    sort(v.begin(), v.end());
    sort(str.begin(), str.end());
    sort(arr, arr+n);

    cout << "\nAfter sorting : \n\n";
    cout << "Vector : \n";
    show(v);
    cout << "Array: \n";
    show(arr, n);
    cout << "String : \n";
    show(str);

    cout << "\nVector after sorting in descending order via comparator() :\n";
    sort(v.begin(), v.end(), cmp);
    show(v);
    cout << "\n";
    cout << "String after sorting in descending order via comparator() : \n";
    sort(str.begin(), str.end(), cmp);
    show(str);
    cout << "\n";

    cout << "Array after sorting in descending order via greater<int>() usage :\n";
    sort(arr, arr+n, greater<int>());
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