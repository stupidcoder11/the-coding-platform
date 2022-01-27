/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=Ke8TPhHdHMw&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=34	*/

import java.io.*;
import java.util.*;

class PrintSubsequence
{
    public static void printSS(String s, String ans)
    {
        if(s.length() == 0)
        {
            System.out.println(ans);
            return;
        }
        printSS(s.substring(1), ans+"");
        printSS(s.substring(1), ans+s.charAt(0));
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            String str = scn.next();
            printSS(str, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}