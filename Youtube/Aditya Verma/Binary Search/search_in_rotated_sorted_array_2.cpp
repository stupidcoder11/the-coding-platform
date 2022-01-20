#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        if(n==0)
            return -1;
        int lb=0, ub=n-1, mid=0;
        int start=nums[0];
        
        while(lb<=ub)
        {
        
            mid=lb+(ub-lb)/2;
            
            if(nums[mid]==target)
                return mid;
            bool big=start<=nums[mid];
            bool not_big=start<=target;
            if(big==not_big)
                {
                    if(nums[mid]<target)
                        lb=mid+1;
                    else
                        ub=mid-1;
                }
            else if(big)
                lb=mid+1;
            else
                ub=mid-1;
        }
        return -1;
    }

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
        
        vector<int> v;
        int t, target, n, temp;

        cin >> t;
        while(t--)
        {
            v.clear();
            cin >> n >> target;
            for(int i=0;i<n;i++)
            {
                cin >> temp;
                v.push_back(temp);
            }
            cout << search(v,target) << endl;
        }

        return 0;   
    }