/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=V-WSKmGTWxk&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=3	*/

import java.io.*;
import java.util.*;

class PrintDecreasingIncreasing
{
    public static void pdi(int n)
    {
        if(n == 0)  return;

        System.out.println(n);
        pdi(n-1);                       //  This would print 1 to n-1 
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
            pdi(n);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}