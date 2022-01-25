/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=97mF4juql6g&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=26	*/

import java.io.*;
import java.util.*;

public class Keypad 
{
    public static void main(String[] args) throws Exception 
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);
            
            String s = scn.next();
            ArrayList<String> ans = getKPC(s);
            System.out.println(ans);
            
            in.close();
            scn.close();
        }
        catch(Exception e)
        {
            return;
        }
    }
    
    public static ArrayList<String> getKPC(String str) 
    {
        if(str.length() == 0)
        {
            ArrayList<String> ans = new ArrayList<>();
            ans.add("");
            return ans;
        }
        
        // Suppose this would give the KPC of smaller string
        ArrayList<String> x = getKPC(str.substring(1));
        
        //  Create a key-value pair of all the numbers associated with their corresponding characters
        String hashMap[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

        //  Extract the string associated with the first number
        String firstKey = hashMap[str.charAt(0)-'0'];
        
        // Now form the ans using smaller input
        ArrayList<String> ans = new ArrayList<>();
        
        for(int i=0; i<firstKey.length(); i++)
        {
            for(String itr : x)
            {
                // Concatenate every character of the first key with the smaller input to form ans
                ans.add(firstKey.charAt(i) + itr);  
            }
        }
        
        return ans;
    }
}