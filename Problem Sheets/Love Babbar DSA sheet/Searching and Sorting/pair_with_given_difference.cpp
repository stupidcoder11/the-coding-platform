#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef Online_Judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n, diff;
    cin >> n >> diff;
    int arr[n];

    for(int i=0;i<n;i++)
    cin >> arr[i];

    sort(arr,arr+n);

    int i=0;
    int j=1;
    while(i<n && j<n)
    {
    if(arr[j]-arr[i]==diff)
    {
        cout << arr[i] << " , " << arr[j] << "\n";
        break;
    }
    else if(arr[j]-arr[i]<diff)
    j++;
    else
    i++;
    }
    if(i==n || j==n)
    cout << "No such pair";
    return 0;
}