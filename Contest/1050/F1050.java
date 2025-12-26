import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class F1050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            ArrayList<int[]> arr = new ArrayList<>();
            int longest = 1;
            for(int i = 0; i < n; i++) {
                int size = sc.nextInt();
                int[] ar = new int[size];
                for(int j = 0; j < size; j++) {
                    ar[j] = sc.nextInt();
                }
                longest = Math.max(longest, size);
                arr.add(ar);
            }

            int[] ans = new int[longest];
            Arrays.fill(ans, -1);
            for(int i = 0; i < n; i++) {
                int currSize = arr.get(i).length;
                for(int j = 0; j < currSize; j++) {
                    if(ans[j] == -1) {
                        ans[j] = arr.get(i)[j];
                    }
                }
                if(currSize == longest) {
                    break;
                }
            }
            for(int i = 0; i < longest; i++) {
                System.out.print(ans[i] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
