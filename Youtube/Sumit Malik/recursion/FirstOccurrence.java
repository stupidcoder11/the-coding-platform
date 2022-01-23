/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=OD39jBFjgdI&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=19	*/

import java.io.*;
import java.util.*;

class FirstOccurrence
{
    public static int getFirstOccurrence(int arr[], int idx, int target)
    {
        if(idx == arr.length)
        return -1;

        if(arr[idx] == target)
        return idx;

        return getFirstOccurrence(arr, idx+1, target);
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

            int target = scn.nextInt();

            int ans = getFirstOccurrence(arr, 0, target);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}