/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=5Q5ed7PWJ8I&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs	*/

import java.io.*;
import java.util.*;

class PrintDecreasing
{
    public static void printDereasing(int n)
    {
        if(n == 0)              // if n becomes zero the recursion should stop
        return;

        System.out.println(n);
        printDereasing(n-1);    // suppose this would print {n-1, n-2, n-3.....1}
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            printDereasing(n);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}