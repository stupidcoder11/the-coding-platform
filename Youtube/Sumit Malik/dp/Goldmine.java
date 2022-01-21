/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=5KdvH15NJjc&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=8	*/

import java.io.*;
import java.util.*;

class Goldmine
{
    public static int getMaxGold(int n, int m, int mine[][])
    {
        int dp[][] = new int[n][m];
        int ans = Integer.MIN_VALUE;

        for(int j=mine[0].length-1; j>=0; j--)
        {
            for(int i=mine.length-1; i>=0; i--)
            {
                if(j==m-1)              // if last col
                dp[i][j] = mine[i][j];
                else if(i == 0)         // if first row & non-last col
                dp[i][j] = mine[i][j] + Math.max(dp[i][j+1], dp[i+1][j+1]);
                else if(i == n-1)       // if last row & non-last col
                dp[i][j] = mine[i][j] + Math.max(dp[i][j+1], dp[i-1][j+1]);
                else
                dp[i][j] = mine[i][j] + Math.max(Math.max(dp[i][j+1], dp[i+1][j+1]), dp[i-1][j+1]);
            }
        }

        for(int i=0; i<n; i++)
        ans = Math.max(ans, dp[i][0]);

        return ans;
    }

    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int m = scn.nextInt();

            int mine[][] = new int[n][m];
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    mine[i][j] = scn.nextInt();
            
            int ans = getMaxGold(n, m, mine);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}