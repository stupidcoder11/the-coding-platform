/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=uwrc4H3yaJ4&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=11	*/

import java.io.*;
import java.util.*;

class TowerOfHanoi
{
    public static void toh(int n, char source, char destination, char helper)
    {
        if(n == 0)  return;

        toh(n-1, source, helper, destination);                  //  This would print the steps to reach from source to helper
        System.out.println(n+"["+source+"->"+destination+"]");  //  We print the final step of keeping the largest disk
        toh(n-1, source, destination, helper);                  // This would print the steps to reach from helper to destination
    }

    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            char A = scn.next().charAt(0);
            char B = scn.next().charAt(0);
            char C = scn.next().charAt(0);

            toh(n, A, B, C);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}