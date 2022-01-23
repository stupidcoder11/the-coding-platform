/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=m4rdYPuisKc&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=6	*/

import java.io.*;
import java.util.*;

class RecursiveFactorial
{
    public static int getRecursiveFactorial(int n)
    {
        if(n == 0)  return 1;
        
        int x = getRecursiveFactorial(n-1);         //  Suppose this would give (n-1)!
        return n*x;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int ans = getRecursiveFactorial(n);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}