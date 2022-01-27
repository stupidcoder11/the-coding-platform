/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=TcCyI-eJMmY&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=38	*/

import java.io.*;
import java.util.*;

class printMazePaths
{
    public static void printMP(int sr, int sc, int dr, int dc, String ans)
    {
        if(sr==dr && sc==dc)
        {
            System.out.println(ans);
            return;
        }
        if(sr>dr || sc>dc)  return;
        printMP(sr, sc+1, dr, dc, ans+"h");
        printMP(sr+1, sc, dr, dc, ans+"v");
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int m = scn.nextInt();
            printMP(0, 0, n-1, m-1, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}