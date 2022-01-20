#include <bits/stdc++.h>
using namespace std;

#define long long int

void show_min_heap(priority_queue<int, vector<int>, greater<int>> p)
{
    while(!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << "\n";
}
void show_max_heap(priority_queue<int> p)
{
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << "\n";
}

void show_vector(vector<int> v)
{
    for(int itr: v) cout << itr << " ";
    cout << "\n";
}

void solve()
{
    // used to create max heap (non-ascending order)
    priority_queue<int> p;

    // used to create min heap (non-descending order)
    priority_queue<int, vector<int>, greater<int>> pq;
    
    vector<int> v = {1,5,2,6,17,90,-3};

    cout << "Order of passing elements :\n";
    show_vector(v);

    for(int itr : v) {
        pq.push(itr);
        p.push(itr);
    }

    cout << "Order of priority_queue (min heap) :\n";
    show_min_heap(pq);
    cout << "Order of priority_queue (max heap) :\n";
    show_max_heap(p);
}

// Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

   return 0;
}