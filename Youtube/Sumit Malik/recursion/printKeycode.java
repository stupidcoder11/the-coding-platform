/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=4yMtvToiJE0&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=35	*/

import java.io.*;
import java.util.*;

class printKeycode
{
    static String hashMap[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    public static void printKeyCombinations(String s, String ans)
    {
        if(s.length() == 0)
        {
            System.out.print(ans+" ");
            return;
        }
        int idx = s.charAt(0)-'0';
        String key = hashMap[idx];
        
        for(int i=0; i<key.length(); i++)
            printKeyCombinations(s.substring(1), ans+key.charAt(i));
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            String str = scn.next();
            printKeyCombinations(str, "");

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}