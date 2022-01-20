#pragma GCC optimise("Ofast")

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0);
    
    // Input
    int n;  cin >> n;
    int arr[n];
    
    for(auto &itr: arr) cin >> itr;
    
    // Perform binary search
    
    int lb = 0, ub = n-1;
    
    while(lb <= ub)
    {
        int mid = lb+(ub-lb)/2;     // this methods avoids integer overflow
        
        if(arr[mid] == target){
            cout << "Index : " << mid << "\n";
            break;
        }
        else if(arr[mid] < target)
            lb = mid+1;     // assuming the array is in non-descending order
        else
            ub = mid-1;
    }
    
    if(lb>ub)   // bcz lb<=ub for sure if element is found due to 'break'
        cout << "Not found!" << "\n";
    
    return 0;
}
