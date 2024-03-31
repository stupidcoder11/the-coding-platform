/**
 * Author	: Devesh
 * Motto	: Regular code makes the road!
 * Link     : https://www.youtube.com/watch?v=zNxDJJW40_k&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=48	*/

import java.util.*;

class TargetSumSubsets {
    public static void printSubsets(int numbers[], int size, int target, int index, int sum, ArrayList<Integer> subset) {
        if(index == size) {
            if(sum == target) {
                System.out.println(subset);
            }
            return;
        }
        // pick up the element
        subset.add(numbers[index]);
        printSubsets(numbers, size, target, index+1, sum+numbers[index], subset);
        // drop the element
        subset.remove(subset.size()-1);
        printSubsets(numbers, size, target, index+1, sum, subset);
    }
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        try {
            int size = scanner.nextInt();
            int numbers[] = new int[size];
            for(int index=0; index<size; ++index) {
                numbers[index] = scanner.nextInt();
            }
            int target = scanner.nextInt();
            // Solution function
            ArrayList<Integer> subset = new ArrayList<>();
            printSubsets(numbers, size, target, 0, 0, subset);
        }
        catch(Exception e) {
            System.out.println(e);
            return;
        }
    }
}