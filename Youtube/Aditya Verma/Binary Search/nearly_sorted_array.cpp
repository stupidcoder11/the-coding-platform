// Enter the nearly sorted array i.e. the target can be on the indices i-1, i or i+1

    // e.g. index = 0   1   2   3   4 
    //      array = 5  10  30  20  40
    
    // But how array should have been 

    //      index = 0   1   2   3   4 
    //      array = 5  10  20  30  40

    // that it index of 30 should have been as 3 but it is 2 (3-1 or i-1) Getting it?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> v;

    int n, temp, target;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> target;

    int lb=0, ub=n-1, mid, ans=-1;


    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        cout << "#mid = " << mid << endl;
        if(target==v[mid])
        {
            ans=mid;
            break;
        }
        else if(mid-1>=0 && target==v[mid-1])
        {
            ans=mid-1;
            break;
        }
        else if(mid+1<=n-1 && target==v[mid+1])
        {
            ans=mid+1;
            break;
        }
        else if(target<v[mid])
        ub=mid-2;
        else
        lb=mid+2;
    }

    if(ans!=-1)
    cout << "Element found @ index " << ans << "\n";
    else
    cout << "Element not found!\n";

    return 0;
}