import java.io.*;
import java.util.*;

class Compute
{
    public static void solve(Vector<Vector<Integer>> arr)
    {
        int ans = Integer.MIN_VALUE;
        for(int i=0; i<arr.size()-2; i++)
        {
            for(int j=0; j<arr.get(i).size()-2; j++)
            {
                int sum = 0;
                sum += arr.get(i).get(j) + arr.get(i).get(j+1) + arr.get(i).get(j+2);
                sum += arr.get(i+1).get(j+1);
                sum += arr.get(i+2).get(j) + arr.get(i+2).get(j+1) + arr.get(i+2).get(j+2);
                
                ans = Math.max(ans, sum);
            }
        }
        System.out.println(ans);
    }
}

public class hourGlass
{
    public static void main(String args[])
    {
        try
        {
            Scanner scn = new Scanner(System.in);
            Vector<Vector<Integer>> arr = new Vector<Vector<Integer>>();
            
            for(int i=0; i<6; i++)
            {
                Vector<Integer> v = new Vector<Integer>();
                for(int j=0; j<6; j++)
                v.add(scn.nextInt());
                arr.add(v);
            }
            
            Compute.solve(arr);

            scn.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}