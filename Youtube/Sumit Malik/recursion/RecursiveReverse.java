/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=_O6geLdoSV4&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=15	*/

import java.io.*;
import java.util.*;

class RecursiveReverse
{
    public static void showReverse(int arr[], int idx)
    {
        if(idx == arr.length)   return;

        showReverse(arr, idx+1);        //  Displays from idx+1th to 0th index elements
        System.out.println(arr[idx]);   //  Display the idxth element
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

            for(int i=0; i<n; i++)  arr[i] = scn.nextInt();

            showReverse(arr, 0);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}