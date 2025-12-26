import java.util.Scanner;

public class D1054 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-->0) {
            int n = sc.nextInt();
            String s = sc.next();

            char[] ch = s.toCharArray();

            if(n <= 3) {
                System.out.println(0);
            }
            else {
                boolean aLeft = false, aRight = false;
                boolean bLeft = false, bRight = false;
                
                char endChar = 'a';

                if(ch[0] == ch[n - 1]){
                    endChar = ch[0];
                }
                
                for(int i = 0; i < (n/2); i++) {
                    if(endChar == 'a') {
                        if(ch[i] == 'a' && !bLeft) {
                            continue;
                        }
                        else {
                            
                        }
                    }
                }
            }
        }
    }
}
