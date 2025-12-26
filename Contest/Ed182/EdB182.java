package Ed182;
import java.util.Scanner;

public class EdB182 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-->0) {
            int n = sc.nextInt();
            int[] arr = new int[n];

            int leftZero = 0;
            int rightZero = 0;
            int countZero = 0;
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                
                if(arr[i] == 0) {
                    countZero++;
                    if(leftZero == 0) {
                        leftZero = i;
                    }
                    rightZero = i;
                }
            }

            int left = leftZero;
            int right = rightZero;

            if(countZero > 1) {
                for(int i = leftZero; i >= 0; i--) {
                    if(arr[i] != i + 1) {
                        left = i + 1;
                    }
                }
                for(int i = rightZero; i < n; i++) {
                    if(arr[i] != i+1) {
                        right = i + 1;
                    }
                }
                System.out.println(right - left + 1);
            }
            else {
                left = -1;
                right = -1;

                for(int i = 0; i < n; i++) {
                    if(arr[i] != 0 && arr[i] != i + 1) {
                        left = i + 1;
                        break;
                    }
                }
                for(int i = n - 1; i >= 0; i--) {
                    if(arr[i] != 0 && arr[i] != i + 1) {
                        right = i + 1;
                        break;
                    }
                }
                if(left == right) {
                    if(left == -1) {
                        System.out.println(0);
                    }
                    else {
                        int findZero = -1;
                        for(int i = 0; i < n; i++) {
                            if(arr[i] == 0) {
                                findZero = i + 1;
                                break;
                            }
                        }
                        System.out.println(Math.abs(findZero - left) + 1);
                    }
                    
                }
                else {
                    System.out.println(right - left + 1);
                }
                
            }
            

        }
        sc.close();
    }
}
