import java.util.Scanner;

public class C1049 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            long[] arr = new long[n];

            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
            }

            long odd = Long.MAX_VALUE, even = 0;
            int small = 0, big = 0;
            for(int i = 0; i < n; i++) {
                if((i+1) % 2 == 1) {
                    if(odd > arr[i]) {
                        odd = arr[i];
                        small = i;
                    }
                }
                else {
                    if(even < arr[i]) {
                        even = arr[i];
                        big = i;
                    }
                }
            }
            long ans = 0;
            if((big - small) + (even - odd) > 0) {
                arr[small] = even;
                arr[big] = odd;
                ans = (big - small);
            }

            for(int i = 0; i < n; i++) {
                if(i % 2 == 0) {
                    ans += arr[i];
                }
                else {
                    ans -= arr[i];
                }
            }
            
            System.out.println(ans);
        }
    }
}
