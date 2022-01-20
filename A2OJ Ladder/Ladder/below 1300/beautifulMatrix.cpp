#include <iostream>
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
    
    int arr[5][5], ans=0;
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    {
        cin >> arr[i][j];
        if(arr[i][j]==1)
        ans=abs(i-2)+abs(j-2);
    }
    
    cout << ans << "\n";

    return 0;
}