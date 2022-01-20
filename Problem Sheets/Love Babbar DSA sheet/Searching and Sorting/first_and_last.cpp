#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int l=0,r=n-1,mid,first_index,last_index;
    bool f1=false,f2=false;
    while(l<=r)
    {
        mid=r+(l-r)/2;
        if(x==arr[mid])
        {
            first_index=mid;
            f1=true;
            r=mid-1;
        }
        else if(x<arr[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
    l=0,r=n-1;
    while(l<=r)
    {
        mid=r+(l-r)/2;
        if(x==arr[mid])
        {
            last_index=mid;
            f2=true;
            l=mid+1;
        }
        else if(x<arr[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
    if(f1 || f2)
    {
        v.push_back(first_index);
        v.push_back(last_index);
    }
    else
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}