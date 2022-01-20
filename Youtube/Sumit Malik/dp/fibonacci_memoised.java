// WAP to print the nth fibonacci considering 0th fibonacci as 0 and 1th fibonacci as 1

import java.util.*;
import java.io.*;

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
        Scanner scn = new Scanner(System.in);
        
        int n = scn.nextInt();

        int ans = fibbMemoised(n, new int[n+1]);

        System.out.println(ans);
    }
}