/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=zri_tftYphE&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=41	*/

import java.io.*;
import java.util.*;

class printMazePathsWithJumps
{
    public static void printMPWJ(int sr, int sc, int dr, int dc, String ans)
    {
        if(sr==dr && sc==dc) 
        {
            System.out.println(ans);
            return;
        }
        for(int hj=1; hj<=dc-sc; hj++)
            printMPWJ(sr, sc+hj, dr, dc, ans+"h"+hj);
        for(int vj=1; vj<=dr-sr; vj++)
            printMPWJ(sr+vj, sc, dr, dc, ans+"v"+vj);
        for(int dj=1; dj<=Math.min(dc-sc, dr-sr); dj++)
            printMPWJ(sr+dj, sc+dj, dr, dc, ans+"d"+dj);
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
            printMPWJ(0, 0, n-1, m-1, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}