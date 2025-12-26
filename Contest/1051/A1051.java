import java.util.Scanner;

public class A1051 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            boolean isPossible = true;

            for(int i = 1; i < n - 1; i++) {
                if(arr[i] < arr[i-1] && arr[i] < arr[i + 1]) {
                    isPossible = false;
                    break;
                }
            }
            if(isPossible) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
