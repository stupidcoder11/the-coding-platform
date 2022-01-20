#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& v, int target) 
    {
        int n=v.size();
        if(n==0)
            return -1;
        int lb=0, ub=n-1, mid=0,prev,next,pivot;
        
        while(lb<=ub)
        {
        
            mid=lb+(ub-lb)/2;
            prev=(mid-1+n)%n;
            next=(mid+1)%n;

            if(v[mid]<=v[prev] && v[mid]<=v[next])
            {
                pivot=mid;
                break;
            }
            else if(v[0]<=v[mid])
                lb=mid+1;
            else
                ub=mid-1;

        }
        if(target==v[pivot])
            return pivot;
        if(target<v[pivot])
        {
            ub=pivot-1;
            lb=0;
        }
        else
        {
            lb=pivot;
            ub=n-1;
        }
        
        //perform simple binary search
        while(lb<=ub)
        {
            mid=lb+(ub-lb)/2;
            if(v[mid]==target)
                return mid;
            else if(v[mid]<target)
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