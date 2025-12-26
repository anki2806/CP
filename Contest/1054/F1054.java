import java.util.Scanner;

public class F1054 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int h = sc.nextInt();
            int d = sc.nextInt();
            boolean flag = false;

            int val = 1;
            int ans = 0;
            while(d > 0) {
                if((h - val) > 0) {
                    h -= val;
                    val++;
                    d--;
                }
                else {
                    val = 1;
                    h++;
                }
                ans++;

                if(h == 1) {
                    flag = true;
                    break;
                }
            }
            if(flag) {
                ans += (2 * d);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
