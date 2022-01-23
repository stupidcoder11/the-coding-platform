/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=obrreX-sQWo&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=17	*/

import java.io.*;
import java.util.*;

class MaximumOfArray
{
    public static int maxOfArray(int arr[], int idx)
    {
        if(idx == arr.length)
        return arr[idx-1];

        int x = maxOfArray(arr, idx+1);         //  Returns the maximum in {arr[idx+1]....end}
        return Math.max(arr[idx], x);
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int arr[] = new int[n];

            for(int i=0; i<n; i++) arr[i] = scn.nextInt();

            int ans = maxOfArray(arr, 0);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}