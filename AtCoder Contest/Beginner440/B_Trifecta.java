import java.util.Scanner;
import java.util.*;
public class B_Trifecta {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Integer[][] arr = new Integer[n][2];

        for(int i = 0; i < n; i++) {
            arr[i][0] = sc.nextInt();
            arr[i][1] = i + 1;
        }

        Arrays.sort(arr, (a,b) -> {
            return a[0] - b[0];
        });

        System.out.println(arr[0][1] + " " + arr[1][1] + " " + arr[2][1]);
        
        sc.close();
    }
}