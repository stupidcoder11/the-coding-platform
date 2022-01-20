//https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1#

class Solution
{
    public int TotalPairs(int[] nums, int k)
    {
        // Code here
        int ans = 0;
        
        HashMap<Integer, Integer> mp = new HashMap<>();
        
        // create hashmap
        for(int itr : nums) {
            
            if(mp.containsKey(itr))
            mp.put(itr,mp.get(itr)+1);
            else
            mp.put(itr,1);
        }
        
        for(int itr : mp.keySet()){
            
            if(k == 0){
                
                if(mp.get(itr) > 1)         ans++;
            }
            else{
                
                if(mp.containsKey(itr+k))   ans++;
            }
        }
        
        return ans;
    }
}