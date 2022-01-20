#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0);
    
    // File IO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    



    // My code
    int n;  cin >> n;
    int arr[n], sum = 0, mode = INT_MAX, max_frq = INT_MIN;
    float mean, median;
    map<int, int> mp;
    
    for(auto &itr: arr) 
    { 
        cin >> itr; 
        //  For calculating mean
        sum += itr; 
        // For calculating mode
        mp[itr]++; 
        max_frq = max(max_frq,mp[itr]); 
        
    }
    // Calculate mean
    mean = (float)sum/n;
    
    // Calculate median
    sort(arr,arr+n);
    
    median = (n&1)? arr[n/2]:(float)(arr[n/2]+arr[(n/2)-1])/2;
    
    // Calculating mode
    auto itr = mp.begin();
    for(; itr != mp.end() && itr->second != max_frq; itr++);
    mode = itr->first;
    
    printf("%.1f\n%.1f\n%d",mean, median, mode);




    // Time cost
    #ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif
    
    return 0;
}