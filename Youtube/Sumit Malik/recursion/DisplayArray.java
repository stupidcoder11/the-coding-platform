/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=MOFUK3PyOPw&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=13	*/

import java.io.*;
import java.util.*;

class DisplayArray
{
    public static void recursiveShow(int arr[], int idx)
    {
        if(idx == arr.length)
        return;

        System.out.println(arr[idx]);       //  This would explicitly print 0th index array element to generate final output
        recursiveShow(arr, idx+1);          //  Suppose this would print array elements starting from idx+1 till last index
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

            recursiveShow(arr, 0);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}