import java.util.Arrays;
import java.util.Scanner;

public class B1051 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[k];
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for(int i = 0; i < k; i++) {
                b[i] = sc.nextInt();
            }

            Arrays.sort(a);
            Arrays.sort(b);
            long ans = 0;
            int j = 0, i = n - 1;
            for( ; j < k ; j++) {
                while( i >= 0 ) {
                    if(b[j] > 1) {
                        b[j]--;
                        ans += a[i--];
                    }
                    else {
                        i--;
                        break;
                    }
                }
            }
            for( ; i >= 0; i--) {
                ans += a[i];
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
