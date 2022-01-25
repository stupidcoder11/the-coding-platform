/*	
    Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=qr984qKJf4Y&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=21	*/

import java.io.*;
import java.util.*;

class FirstOccurrence
{
    public static int getLastOccurrence(int arr[], int idx, int target)
    {
        if(idx == arr.length)   return -1;

        int x = getLastOccurrence(arr, idx+1, target);     //  If {arr[idx+1]...end} contains target

        if(x != -1) return x;
        
        return (arr[idx] == target)?idx:-1;
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

            int ans = getLastOccurrence(arr, 0, target);
            System.out.println(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}