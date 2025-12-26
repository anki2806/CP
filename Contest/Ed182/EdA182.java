package Ed182;
import java.util.Scanner;

public class EdA182 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int[] sum = new int[n];

            sum[0] = arr[0];
            for(int i = 1; i < n; i++) {
                sum[i] = sum[i] + sum[i-1];
            }

            int sumI = 0;
            boolean flag = false;
            for(int i = 0; i < n; i++) {
                sumI += arr[i];
                int sumJ = 0;
                for(int j = i + 1; j < n; j++) {
                    sumJ += arr[j];
                    int sumK = 0;
                    for(int k = j + 1; k < n; k++) {
                        sumK += arr[k];
                    }
                    if(((sumI % 3 == sumJ % 3) && (sumI % 3 == sumK % 3)) || ((sumI % 3 != sumJ % 3) && (sumI % 3 != sumK % 3) && (sumJ % 3 != sumK % 3))) {
                        System.out.println((i + 1) + " " + (j + 1));
                        flag = true;
                        break;
                    }
                }
                if(flag) {
                    break;
                }
            }
            if(!flag) {
                System.out.println(0 + " " + 0);
            }
            
        }
        sc.close();
    }
}
