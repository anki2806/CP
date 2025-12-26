import java.util.Arrays;
import java.util.Scanner;

public class C_Odd_Process {
    private static void solve(int[] arr, int[] arrEven, int[] arrOdd, int[] ans, int even, int odd) {
        int e = even, o = odd;
        if(odd > 0) {
            ans[0] = arrOdd[o - 1];
            odd--;

            if(even > 0) {
                int i = 0;
                while(e - 1 - i > 0)
                ans[0] = arrEven[e - 1 - i];
                i++;
            }









        }
        else {
            for(int i = 0; i < ans.length; i++) {
                ans[i] = 0;
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];

            int even = 0, odd = 0;    
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if(arr[i] % 2 == 0) {
                    even++;
                }
                else {
                    odd++;
                }
            }

            int arrOdd[] = new int[odd];
            int arrEven[] = new int[even];
            int o = 0, e = 0;
            for(int i = 0; i < n; i++) {
                if(arr[i] % 2 == 0) {
                    arrEven[e++] = arr[i];
                }
                else {
                    arrOdd[o++] = arr[i];
                }
            }

            Arrays.sort(arrEven);
            Arrays.sort(arrOdd);

            int[] ans = new int[n];

            
            
            solve(arr, arrEven, arrOdd, ans, even, odd);

            for(int i = 0; i < n; i++) {
                System.out.print(ans[i] + " ");
            }
            System.out.println();

        }
        sc.close();
    }
}