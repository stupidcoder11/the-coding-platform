/*  Author  :   Devesh
    Motto   :   Regular code makes the road!
    Link    :   */   

import java.util.*;
import java.io.*;

class climb_stairs123
{
    public static int getTotalClimbingWays(int n)
    {
        int dp[] = new int[n+1];
        
        for(int i=0; i<=n; i++)
        {
            if(i == 0)          dp[i] = 1;
            else if(i == 1)     dp[i] = 1;
            else if(i == 2)     dp[i] = dp[i-1] + dp[i-2];
            else                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        return dp[n];
    }

    public static void main(String args[])throws Exception
    {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int ans = getTotalClimbingWays(n);

        System.out.println(ans);

        scn.close();
    }
}