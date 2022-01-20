//https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1#

class Solution{
    public:
    int TotalPairs(vector<int>nums, int k)
    {
        // Code here
        
        int ans = 0;
        unordered_map<int,int> ump;
        
        for(auto itr: nums) ump[itr]++;
        
        for(auto itr: ump){
            
            int key = itr.first;
            int freq = itr.second;
            
            if(k == 0)
            {
                if(freq > 1)    ans++;
            }
            else
            {
                if(ump.count(key+k))    ans++;
            }
        }
        
        return ans;
    }

};