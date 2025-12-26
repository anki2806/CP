import java.io.*;
import java.util.Scanner;

// Driver Class
public class A1048 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            if(a < b && b % a == 0) {
                System.out.println(1);
            }
            else if(b < a && a % b == 0) {
                System.out.println(1);
            }
            else if(a == b) {
                System.out.println(0);
            }
            else {
                System.out.println(2);
            }
        }
        sc.close();
    }
}