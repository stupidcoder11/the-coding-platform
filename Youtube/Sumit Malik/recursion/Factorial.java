/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=m4rdYPuisKc&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=6	*/

import java.io.*;
import java.util.*;

class Factorial
{
    public static int getFactorial(int n)
    {
        if(n == 0)  return 1;

        int x = getFactorial(n-1);          //  Suppose this would return (n-1)!

        return x*n;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            System.out.println(getFactorial(n));

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}