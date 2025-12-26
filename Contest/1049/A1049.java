import java.util.Scanner;

public class A1049 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            String s = sc.next();
            char[] ch = s.toCharArray();
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(ch[i] == '1') {
                    count++;
                }
            }
            int ans = 0;
            for(int i = n - 1; i >= 0; i--) {
                
                if(count > 0) {
                    if(ch[i] == '0') {
                        ans++;
                    }
                }
                else {
                    break;
                }
                count--;
            }
            System.out.println(ans);
            sc.close();
        }
    }
}
