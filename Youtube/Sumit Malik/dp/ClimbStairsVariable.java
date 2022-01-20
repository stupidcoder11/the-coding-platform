/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=uNqoQ0sNZCM&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=3	*/

import java.io.*;
import java.util.*;

class ClimbStairsVariable
{
    public static int getTotalWaysTabulation(int n, int moves[])
    {
        int dp[] = new int[n+1];
        dp[n] = 1;      // ways to go to nth stair from nth stair is 1 i.e. by standing or taking 0 step

        for(int i=n-1; i>=0; i--)
        {
            for(int j=1; j<=moves[i] && i+j<dp.length; j++)
            {
                dp[i] += dp[i+j];       // dp[0] = dp[0] + dp[0+1] + dp[0+2] + dp[0+3]
            }
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

            int ans = getTotalWaysTabulation(n, moves);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}