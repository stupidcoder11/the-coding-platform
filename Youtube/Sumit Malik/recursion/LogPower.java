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

        if((n&1) == 1)                               //  if n is odd  we compute x*(x^n-1)
        return getLogarithmicPower(x, n-1)*x;

        return getLogarithmicPower(x*x, n/2);       //   if n is even we compute (x*x)^(n/2)
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