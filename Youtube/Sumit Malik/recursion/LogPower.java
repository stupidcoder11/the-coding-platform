/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=O84uumjBOMY&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=9	*/

import java.io.*;
import java.util.*;

class LogPower
{
    public static int getLogarithmicPower(int x, int n)
    {
        if(n == 0)  return 1;

        if((n&1) == 1)                                  // if n is odd
        {
            int xnm1 = getLogarithmicPower(x, n-1);     // obtain x^(n-1) and multiply it with x to get x^n
            return x*xnm1;
        }    
        else                                            // if n is even
        {
            int xnm1b2 = getLogarithmicPower(x, n/2);   // obtain x^n/2 and multiply it with x^n/2 to get x^n
            return xnm1b2*xnm1b2;
        }
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int base = scn.nextInt();
            int pow = scn.nextInt();

            System.out.println(getLogarithmicPower(base, pow));

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}