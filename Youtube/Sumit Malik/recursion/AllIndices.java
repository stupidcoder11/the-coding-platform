/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=bQkwHBaNioE&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=25	*/

import java.io.*;
import java.util.*;

class AllIndices
{
    public static int[] getAllIndices(int arr[], int x, int idx, int fsf)
    {
        if(idx == arr.length)
        {
            /*  By the end of the array we get the fsf (found so far) value against the target so we create
                an array of length equal to fsf */
            return new int[fsf];
        }

        if(arr[idx] == x)
        {
            /*  If we get a HIT at index idx, we increament the idx & fsf value by one i.e. by 
                now we have one x present in the array arr[] */
            int ans[] = getAllIndices(arr, x, idx+1, fsf+1);
            
            //  This is the returning line so we will fill up the ans array in the case of HIT

            /*  Observe the use of fsf here, at the time of building stack it was serving as the number
            of HITS found till the index = idx and by the time of returning it was serving as the
            index for ans[] array */
            ans[fsf] = idx;

            return ans;
        }
        else
        {   /*  If we get a MISS at index idx, we just update idx by idx+1 and don't update fsf */
            int ans[] = getAllIndices(arr, x, idx+1, fsf);
            
            //  While returning there is no need to fill up the ans[] array in case of MISS so ...
            return ans;
        }
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

            for(int i=0; i<n; i++) {
                arr[i] = scn.nextInt();
            }

            int x = scn.nextInt();

            int ans[] = getAllIndices(arr, x, 0, 0);

            int N = ans.length;
            if(N == 0) {
                System.out.println();
                return;
            }

            for(int i=0; i<N; i++) {
                System.out.println(ans[i]);
            }

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
}