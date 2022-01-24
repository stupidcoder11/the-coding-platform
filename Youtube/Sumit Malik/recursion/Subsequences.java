/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=Sa5PmCFF_zI&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=25	*/

import java.io.*;
import java.util.*;

class Subsequences
{
    public static ArrayList<String> gss(String s)
    {
        if(s.length() == 0)
        {
            ArrayList<String> list = new ArrayList<>();
            list.add("");
            return list;
        }

        ArrayList<String> list = gss(s.substring(1));   //  Suppose this will give the subsequences of smaller string
        
        ArrayList<String> ans = new ArrayList<>();
        for(String itr : list)
        {
            ans.add(itr);                               //  Exclude starting character
            ans.add(s.charAt(0)+itr);                   //  Include starting character
        }
        
        return ans;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            String str = in.readLine();
            ArrayList<String> list = gss(str);

            System.out.println(list + "\n" + list.size());

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}