/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=94dfRrDANRY&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=2	*/

import java.io.*;
import java.util.*;

class fibonacci_memoised
{
    public static int fibbMemoised(int n, int dp[])
    {
        if(n == 0 || n == 1)    return n;
        else if(dp[n] != 0)     return dp[n];

        int a = fibbMemoised(n-1, dp);
        int b = fibbMemoised(n-2, dp);
        int x = a+b;

        dp[n] = x;
        return x;
    }

    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();

            int ans = fibbMemoised(n, new int[n+1]);

            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}