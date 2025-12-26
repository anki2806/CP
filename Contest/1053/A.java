import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int[] arr = new int[m];

            for(int i = 0; i < m; i++) {
                arr[i] = sc.nextInt();
            }

            if(m > 1) {
                boolean flag = true;
                for(int i = 0; i < m - 1; i++) {
                    if(arr[i] >= arr[i + 1]) {
                        System.out.println(1);
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    System.out.println(n - arr[m - 1] + 1);
                }
            }
            
            else {
                System.out.println(n - arr[m - 1] + 1);
            }
        }
        sc.close();
    }    
}
