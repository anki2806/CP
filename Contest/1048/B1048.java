import java.util.Arrays;
import java.util.Scanner;

public class B1048 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            long m = sc.nextLong();

            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Arrays.sort(a);
            long ans = 0;
            int k = (int) Math.min(n, m);

            for (int i = 0; i < k; i++) {
                int rate = a[n - 1 - i];
                long time = m - i;
                ans += (long) rate * time;
            }
            
            System.out.println(ans);
        }
        sc.close();
    }
}
