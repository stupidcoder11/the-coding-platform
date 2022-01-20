#include <bits/stdc++.h>
using namespace std;

#define long long int

void solve()
{
    priority_queue<int> pq_max;
    vector<int> v = {1,5,2,-1,22,2,90,-113};

    for(int itr: v) pq_max.push(itr);

    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(1);
    min_heap.push(12);
    min_heap.push(-123);
    min_heap.push(55);

    cout << "min_heap contents :\n";
    while(!min_heap.empty())
    {
        cout << min_heap.top() << "\n";
        min_heap.pop();
    }
    cout << "\n";

    cout << "pq_max.size() : \n" << pq_max.size() << "\n";
    cout << "pq_max.top() :\n" << pq_max.top() << "\n";
    cout << "pq_max.empty() :\n" << pq_max.empty() << "\n";
    cout << "pq_max.pop() :\n" << 
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}