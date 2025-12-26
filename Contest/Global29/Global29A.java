package Global29;
import java.util.Scanner;

public class Global29A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            if(y > x) {
                System.out.println(2);
            }
            else if(x - y > 1 && y > 1) {
                System.out.println(3);
            }
            else {
                System.out.println(-1);
            }
        }
        sc.close();
    }
}
