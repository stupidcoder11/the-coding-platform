/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=hMJAlbJIS7E&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=29	*/

import java.io.*;
import java.util.*;

class StairPaths
{
    public static ArrayList<String> getPaths(int n)
    {
        if(n == 0)          return new ArrayList<String>(Arrays.asList(""));

        // If we don't find a path at last
        if(n < 0)           return new ArrayList<String>();
        
        ArrayList<String> nm1 = getPaths(n-1);      // Faith 1
        ArrayList<String> nm2 = getPaths(n-2);      // Faith 2
        ArrayList<String> nm3 = getPaths(n-3);      // Faith 3

        ArrayList<String> ans = new ArrayList<>();
        for(String itr : nm1)   ans.add("1"+itr);
        for(String itr : nm2)   ans.add("2"+itr);
        for(String itr : nm3)   ans.add("3"+itr);

        return ans;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            ArrayList<String> ans = getPaths(n);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}