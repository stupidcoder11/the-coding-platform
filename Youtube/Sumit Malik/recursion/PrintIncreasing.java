/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=Y5IobAWmfjQ&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=2	*/

import java.io.*;
import java.util.*;

class PrintIncreasing
{
    public static void printIncreasing(int n)
    {
        if(n == 0)
        return;

        printIncreasing(n-1);
        System.out.println(n);
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            printIncreasing(n);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}