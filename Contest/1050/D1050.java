import java.util.Arrays;
import java.util.Scanner;

public class D1050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            long[] arr = new long[n];
            long ans = 0;

            int countOdd = 0;
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if(arr[i] % 2 == 1) {
                    countOdd++;
                }
                ans += arr[i];
            }
            if(countOdd == 0) {
                System.out.println(0);
            }
            else {
                Arrays.sort(arr);
                countOdd /= 2;
                for(int i = 0; i < n; i++) {
                    if(countOdd > 0 && arr[i] % 2 == 1) {
                        countOdd--;
                        ans -= arr[i];
                    }
                }
                
                System.out.println(ans);
            }
        }
        sc.close();
    }
}
