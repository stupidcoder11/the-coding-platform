#include <bits/stdc++.h>
using namespace std;

#define long long int

/* a priority queue maintains a set of elements with supported operations of insertion, retrieval and removal of 
either minimum or maximum element */

// insertion and deletion takes O(logN) time 
// retrieval takes O(1) time

/* the benefit of priority_queue<> is that it has smaller constant factors. A priority queue is usually implemented
using a heap structure that is much simpler than a balanced binary tree used in an ordered set.*/

/* by default, the elements in a C++ priority queue are sorted in "decreasing order", and it is possible to find & 
remove the largest element in the queue */

void show(priority_queue<int> p)
{
    while(!p.empty()) {
        cout << p.top() << "\n";
        p.pop();
    }
    cout << "\n";
}

void solve()
{
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);

    show(pq);
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

   return 0;
}