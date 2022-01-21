/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=Zobz9BXpwYE&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=5	*/

import java.io.*;
import java.util.*;

class ClimbStairsMinimumMoves
{
    public static Integer getMinimumMoves(int n, int moves[])
    {
        Integer dp[] = new Integer[n+1];    // understand int vs Integer array (the later has null value by default)
        dp[n] = 0;          // it takes 0 steps to go from nth step to nth step i.e. by standing

        for(int i=n-1; i>=0; i--)
        {
            int leastJump = Integer.MAX_VALUE;      // for calculating the minimum steps that need to be taken from ith stair to reach nth stair
            for(int j=1; j<=moves[i] && i+j<dp.length; j++)
            {
                if(dp[i+j] != null)
                leastJump = Math.min(leastJump, dp[i+j]);
            }
            if(leastJump != Integer.MAX_VALUE)      // if all the stairs under comparision don't have step(s) to reach the nth stair
            dp[i] = 1+leastJump;
        }

        return dp[0];
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int moves[] = new int[n];
            for(int i=0; i<n; i++)  moves[i] = scn.nextInt();

            Integer ans = getMinimumMoves(n, moves);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}