 /*	Author	: Devesh
     Motto	: Regular code makes the road!
     Link	: https://www.youtube.com/watch?v=VaGBRiSdtFI&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=33	*/
 
 import java.io.*;
 import java.util.*;
 
 class MazePathWithJumps
 {
    public static void showPaths(ArrayList<String> ans)
    {
        System.out.println("Total paths found : " + ans.size());
        System.out.println("############## PATHS ##############");
        for(int i=0; i<ans.size(); i++)
        System.out.println("PATH #" + (i+1)+" :\t\t"+ans.get(i));
    }

    public static ArrayList<String> getPathsWithJumps(int sr, int sc, int dr, int dc)
    {
        if(sr==dr && sc==dc)    return new ArrayList<String>(Arrays.asList(""));
        // if(sr>dr || sc>dc)      return new ArrayList<String>();     // unnecessary bcz constraints aren't broken

        ArrayList<String> ans = new ArrayList<String>();
        
        for(int hj=1; hj<=dc-sc; hj++)
        {
            ArrayList<String> hp = getPathsWithJumps(sr, sc+hj, dr, dc);
            for(String itr : hp)    ans.add("h"+hj+itr);
        }

        for(int vj=1; vj<=dr-sr; vj++)
        {
            ArrayList<String> vp = getPathsWithJumps(sr+vj, sc, dr, dc);
            for(String itr : vp)    ans.add("v"+vj+itr);
        }

        for(int dj=1; dj<=Math.min(dc-sc, dr-sr); dj++)
        {
            ArrayList<String> dp = getPathsWithJumps(sr+dj, sc+dj, dr, dc);
            for(String itr : dp)    ans.add("d"+dj+itr);
        }

        return ans;
    }
    public static void main(String args[])throws Exception
    {
        try
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            Scanner scn = new Scanner(System.in);

            // Input goes here
            int n = scn.nextInt();
            int m = scn.nextInt();
            ArrayList<String> ans = getPathsWithJumps(1, 1, n, m);
            showPaths(ans);

            scn.close();
            in.close();
        }
        catch(Exception e) { return; }
    }
 }