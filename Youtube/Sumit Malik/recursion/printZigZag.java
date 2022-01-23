/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=R7qja_gZrvI&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=10	*/

import java.io.*;
import java.util.*;

class printZigZag
{
    public static void pzz(int n)
    {
        if(n == 0)  return;

        System.out.println("Pre "+n);
        pzz(n-1);
        System.out.println("In "+n);
        pzz(n-1);
        System.out.println("Post "+n);
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            pzz(n);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}