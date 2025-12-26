import java.util.ArrayList;
import java.util.Scanner;

public class B1052L {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            ArrayList<int[]> arr = new ArrayList<>();
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[] freq = new int[m + 1];

            for(int i = 0; i < n; i++) {
                int size = sc.nextInt();
                int[] nums = new int[size];

                for(int j = 0; j < size; j++) {
                    nums[j] = sc.nextInt();
                    freq[nums[j]]++;
                }
                arr.add(nums);
            }

            boolean isPossible = true;

            for(int i = 1; i <= m; i++) {
                if(freq[i] == 0) {
                    isPossible = false;
                }
            }
            
            if(isPossible) {
                int reqSet = 0;

                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < arr.get(i).length; j++) {
                        if(freq[arr.get(i)[j]] == 1) {
                            reqSet++;
                            break;
                        }
                    }
                }

                if(n - reqSet >= 2) {
                    System.out.println("YES");
                }
                else {
                    System.out.println("No");
                }
            }
            else {
                System.out.println("No");
            }
        }
        sc.close();
    }
}
