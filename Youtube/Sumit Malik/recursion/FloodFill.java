/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://www.youtube.com/watch?v=R1URUB6_y2k&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=47	*/

import java.util.Scanner;

class FloodFill {
    private static void printPath(int maze[][], int n, int m, int startRow, int startCol, String path, boolean visited[][]) {
        if(startRow == n || startRow < 0 || startCol == m || startCol < 0 || maze[startRow][startCol] == 1 || visited[startRow][startCol]) {
            return;
        }
        if(startRow == n-1 && startCol == m-1) {
            System.out.println(path);
            return;
        }
        visited[startRow][startCol] = true;
        printPath(maze, n, m, startRow-1, startCol, path+"t", visited);
        printPath(maze, n, m, startRow, startCol-1, path+"l", visited);
        printPath(maze, n, m, startRow+1, startCol, path+"d", visited);
        printPath(maze, n, m, startRow, startCol+1, path+"r", visited);
        visited[startRow][startCol] = false;
    }
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        try(scan){
            int n = scan.nextInt();
            int m = scan.nextInt();
            int maze[][] = new int[n][m];
            boolean visited[][] = new boolean[n][m];
            for(int rowIndex=0; rowIndex<n; ++rowIndex) {
                for(int colIndex=0; colIndex<m; ++colIndex) {
                    maze[rowIndex][colIndex] = scan.nextInt();
                }
            }
            FloodFill.printPath(maze, n, m, 0, 0, "", visited);
        }
        catch(Exception e) {
            System.out.println("Error: "+e.getMessage());
        }
    }
}