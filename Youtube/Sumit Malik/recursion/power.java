/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=KYke5cn9jAk&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=7	*/

import java.io.*;
import java.util.*;

class power
{
    public static int getPower(int x, int n)
    {
        if(n == 0)  return 1;
        int xnm1 = getPower(x, n-1);
        int ans = x*xnm1;

        return ans;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int base = scn.nextInt();
            int exp = scn.nextInt();

            int ans = getPower(base, exp);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}