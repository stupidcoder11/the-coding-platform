/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: 	*/

import java.io.*;
import java.util.*;

class LastOccurence
{
    public static int getLastOccurence(int arr[], int x, int idx)
    {
        if(idx == arr.length)   return -1;

        int ans = getLastOccurence(arr, x, idx+1);

        return (ans == -1)?(arr[idx] == x)?idx:-1:ans;
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
            for(int i=0; i<n; i++)
            arr[i] = scn.nextInt();
            int x = scn.nextInt();

            System.out.println(getLastOccurence(arr, x, 0));

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}