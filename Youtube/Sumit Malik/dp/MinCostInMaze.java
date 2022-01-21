/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=D-0souJUBMU&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=6	*/

import java.io.*;
import java.util.*;

class MinCostInMaze
{
    public static int getMinCost(int n, int m, int arr[][])
    {
        int dp[][] = new int[n][m];

        for(int i = n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                if(i == n-1 && j == m-1)    // if control points to the destination cell
                    dp[i][j] = arr[i][j];
                else if(i == n-1)           // if control points to the last row
                    dp[i][j] = arr[i][j]+dp[i][j+1];
                else if(j == m-1)           // if control points to the last column
                    dp[i][j] = arr[i][j]+dp[i+1][j];
                else                        // if control points remaining block
                    dp[i][j] = arr[i][j] + Math.min(dp[i+1][j], dp[i][j+1]); 
            }
        }

        return dp[0][0];
    }

    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n, m;
            n = scn.nextInt();
            m = scn.nextInt();

            int arr[][] = new int[n][m];

            for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            arr[i][j] = scn.nextInt();

            int ans = getMinCost(n, m, arr);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}