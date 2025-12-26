import java.util.Scanner;

public class C1050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            // int[] arr = new int[m];
            // for(int i = 0; i < m; i++) {
            //     arr[i] = -1;
            // }

            // int ind = 0,firstInd = -1;
            // for(int i = 0; i < n; i++) {
            //     ind = sc.nextInt();
            //     arr[ind-1] = sc.nextInt();
            //     if(firstInd == -1) {
            //         firstInd = ind;
            //     }
            // }
            // for(int i = firstInd; i < m; i++) {
            //     if(arr[i] == -1) {
            //         if(arr[i - 1] == 0) {
            //             arr[i] = 1;
            //         }
            //         else {
            //             arr[i] = 0;
            //         }
            //     }
            // }
            // int ans = 0;
            // if(arr[0] == 1) {
            //     ans++;
            // }
            // for(int i = 1; i < m; i++) {
            //     if(arr[i] != arr[i - 1]) {
            //         ans++;
            //     }
            // }
            // System.out.println(ans);

            int ans = 0;
            int ind = 0, val = 0;
            int currInd = -1, currVal = -1;
            for(int i = 0; i < n; i++) {
                currInd = sc.nextInt();
                currVal = sc.nextInt();

                if((currInd - ind) % 2 == 0) {
                    if(currVal == val) {
                        ans += (currInd - ind);
                    }
                    else {
                        ans += (currInd - ind - 1);
                    }
                }
                else {
                    if(currVal != val) {
                        ans += (currInd - ind);
                    }
                    else {
                        ans += (currInd - ind - 1);
                    }
                }
                val = currVal;
                ind = currInd;
            }
            ans += (m - ind);
            System.out.println(ans);
        }
        sc.close();
    }
}
