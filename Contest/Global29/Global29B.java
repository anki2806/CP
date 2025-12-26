package Global29;
import java.util.Arrays;
import java.util.Scanner;

public class Global29B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {

            int n = sc.nextInt();

            int[] arr = new int[2 * n];
            Arrays.fill(arr, 1);
            int b = n;
            while(b > 0) {
                for(int i = 0; i < 2 * n; i++) {
                    if(arr[i] == 1 && i + b < 2 * n && arr[i + b] == 1) {
                        arr[i] = b;
                        arr[i + b] = b;
                        break;
                    }
                }
                b--;
            }
            for(int i = 0; i < 2 * n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
