/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=JxIoGHzzoW8&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=36	*/

import java.io.*;
import java.util.*;

class printStairPaths
{
    static int i=0;
    public static void printSP(int n, String ans)
    {
        if(n==0)
        {
            System.out.println("Path "+ ++i + " :\t" + ans);
            return;
        }
        if(n<0) return;

        printSP(n-1, ans+"1");
        printSP(n-2, ans+"2");
        printSP(n-3, ans+"3");
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            printSP(n, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}