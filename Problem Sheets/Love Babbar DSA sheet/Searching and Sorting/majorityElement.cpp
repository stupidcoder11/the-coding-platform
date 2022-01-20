// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // using Boyer-Moore majority voting algorithm
        
        int candidateKeyIndex=0;
        int count=1;
        
        for(int i=1;i<size;i++)
        {
            if(a[candidateKeyIndex]==a[i])
            count++;
            else
            count--;
            
            if(count==0)
            {
                candidateKeyIndex=i;
                count=1;
            }
        }
        
        count=0;
        
        for(int i=0;i<size;i++)
        if(a[i]==a[candidateKeyIndex])
            count++;
        
        if(count>size/2)
            return a[candidateKeyIndex];
        else
            return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends