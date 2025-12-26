import java.util.Scanner;

public class B1056 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            char[][] ch = new char[n][n];

            int p = k;
            if(n*n - k > 1) {
                System.out.println("YES");

                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) {
                        if(p > 0) {
                            p--;
                            ch[i][j] = 'U';
                        }
                        else {
                            if(i == 0) {
                                ch[i][j] = 'D';
                            }
                            else if(i == n - 1 && j != n - 1) {
                                ch[i][j] = 'R';
                            }
                            else if(i == n - 1 && j == n -1) {
                                ch[i][j] = 'L';
                            }
                            else if(j == 0) {
                                ch[i][j] = 'R';
                            }
                            else if(j == n - 1 && i == n - 1) {
                                ch[i][j] = 'L';
                            }
                            else if(j == n - 1 && i != n - 1) {
                                ch[i][j] = 'D';
                            }
                        }
                    }
                }
            }
            else {
                System.out.println("NO");
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    System.out.print(ch[i][j]);
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
