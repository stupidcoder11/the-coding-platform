#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    static int computeHourGlass(int i, int j, vector<vector<int>> mat){
        int sum = 0;
        // top row of hour glass
        sum += mat[i][j] + mat[i][j+1] + mat[i][j+2];
        // middle row of hourglass
        sum += mat[i+1][j+1];
        // bottom row of hourglass
        sum += mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];
        
        return sum;
    }
    
    public:
    static void solve(vector<vector<int>> mat){
        int ans = -63;
        for(int i=0; i<mat.size()-2; i++)
        {
            for(int j=0; j<mat[i].size()-2; j++)
            ans = max(ans, computeHourGlass(i, j, mat));
        }
        
        cout << ans << "\n";
    } 
};

int main()
{
    ios_base::sync_with_stdio(false);   cin.tie(0); cout.tie(0);
    
    vector<vector<int>> grid(6, vector<int> (6,0));
    for(auto& outer: grid)  for(auto& inner: outer) cin >> inner;
    
    Solution::solve(grid);
    
    return 0;
}