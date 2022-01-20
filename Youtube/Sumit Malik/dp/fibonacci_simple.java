import java.util.*;
import java.io.*;

class fibonacci_simple
{
    public static int getFibb(int n)
    {
        if(n == 0 || n == 1)    
        return n;

        int x = getFibb(n-1);
        int y = getFibb(n-2);

        return x+y;
    }
    
    public static void main(String args[])throws Exception
    {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int ans = getFibb(n);
        System.out.println(ans);

        scn.close();
    }
}