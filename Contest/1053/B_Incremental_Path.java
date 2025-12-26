import java.util.ArrayList;
import java.util.Scanner;

public class B_Incremental_Path {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            String s = sc.next();

            int[] arr = new int[m];

            for(int i = 0; i < m; i++) {
                arr[i] = sc.nextInt();
            }
            
            int color = 1;
            
            ArrayList<Integer> ans = new ArrayList<>();
            ans.add(1);
            for(int i = 0; i < n; i++) {
                char ch = s.charAt(i);

                if(ch == 'A') {
                    ans.add(i + 1);
                }
                else {
                    while(i + 1 == (arr[j] - 1)) {

                    }
                }

            }
        }
    }
}
