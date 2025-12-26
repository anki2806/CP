import java.util.Scanner;

public class A1054 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int countMinus = 0;
            int countZero = 0;
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if(arr[i] == -1) {
                    countMinus++;
                }
                else if(arr[i] == 0) {
                    countZero++;
                }
            }
            System.out.println(((countMinus % 2)* 2) + countZero);
        }
        sc.close();
    }
}
