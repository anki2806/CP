import java.util.Arrays;
import java.util.Scanner;

public class B1054 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];

            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            
            int ans = Integer.MIN_VALUE;
            for(int i = n - 1; i > 0; i -= 2) {
                ans = Math.max(ans, arr[i] - arr[i - 1]);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
