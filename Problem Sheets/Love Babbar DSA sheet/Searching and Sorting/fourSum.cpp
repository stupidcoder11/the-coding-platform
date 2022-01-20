#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];

    vector<vector<int> >vv;
    vector<int> temp;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            
            int k=j+1;
            int l=j+2;
            while(k<n && l<n)
            {
                if(arr[i]+arr[j]+arr[k]+arr[l]==sum)
                {

                }
            }
        }
    }

    return 0;
}