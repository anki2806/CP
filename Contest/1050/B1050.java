import java.util.Scanner;

public class B1050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();

            int ans = 0;
            int xIn = -1;
            int yIn = -1;
            for(int i = 0; i < n; i++) {
                xIn = sc.nextInt();
                if(xIn < x) {
                    ans++;
                }
            }
            for(int j = 0; j < m; j++) {
                yIn = sc.nextInt();
                if(yIn < y) {
                    ans++;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
