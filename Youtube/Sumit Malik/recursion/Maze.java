/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=7i41gZLXe5k&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=31	*/

import java.io.*;
import java.util.*;

class Maze
{
    public static ArrayList<String> getPaths(int srow, int scol, int drow, int dcol)
    {
        if(srow == drow && scol == dcol)
        return new ArrayList<String>(Arrays.asList(""));
        if(srow > drow || scol > dcol)
        return new ArrayList<String>();

        ArrayList<String> p1 = getPaths(srow, scol+1, drow, dcol);
        ArrayList<String> p2 = getPaths(srow+1, scol, drow, dcol);

        ArrayList<String> ans = new ArrayList<String>();
        for(String itr : p1)    ans.add("h"+itr);
        for(String itr : p2)    ans.add("v"+itr);

        return ans;
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

            ArrayList<String> ans = getPaths(0, 0, n-1, m-1);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}