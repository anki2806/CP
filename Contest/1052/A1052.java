import java.util.Scanner;

public class A1052 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int[] count = new int[101];
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                count[arr[i]]++;
            }
            int ans = 0;

            for(int i = 0; i < 101; i++) {
                
                int currMax = 0;
                for(int j = 0; j < 101; j++) {
                    if(count[j] >= count[i]) {
                        currMax += count[i];
                    }
                }
                ans = Math.max(ans, currMax);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
