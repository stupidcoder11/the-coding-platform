/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=K5xJXbnYMBc&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=42	*/

import java.io.*;
import java.util.*;

class PrintPermutations
{
    public static void printPermutations(String s, String ans)
    {
        if(s.length()==0)
        {
            System.out.println(ans);
            return;
        }
        
        for(int i=0; i<s.length(); i++) 
        printPermutations(s.substring(0, i)+s.substring(i+1), ans+s.charAt(i));
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            String str = scn.next();
            printPermutations(str, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}