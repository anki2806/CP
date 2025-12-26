import java.util.HashMap;
import java.util.Scanner;

public class C_Symmetrical_Polygons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0) {
            int n = sc.nextInt();
            long[] arr = new long[n];

            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            HashMap<Long,Integer> map = new HashMap<>();
            for(int i = 0; i < n; i++) {
                map.put(arr[i],map.getOrDefault(arr[i],0)+1);
            }
            long largest = 0, secondLargest = 0;
            long ans = 0;

            for(long ele : map.keySet()) {
                if(map.get(ele) > 1) {
                    if(map.get(ele) % 2 == 1) {
                        ans += (ele * (map.get(ele) - 1));
                    }
                    else {
                        ans += (ele * map.get(ele));
                    }
                }
                if(map.get(ele) % 2 == 1) {
                    largest = Math.max(largest, ele);
                }
            }

            for(long ele : map.keySet()) {
                if(map.get(ele) % 2 == 1 && largest != ele) {
                    secondLargest = Math.max(secondLargest, ele);
                }
            }
            if(ans != 0) {
                ans += (largest + secondLargest);
            }
            boolean check = true;
            if(n == 3) {
                check = checkSumOfThreeSides(arr);
            }
            if(check) {
                System.out.println(ans);
            }
            else {
                System.out.println(0);
            }

        }

        sc.close();
    }

    public static boolean checkSumOfThreeSides(long[] arr) {
        if(arr[0] + arr[1] <= arr[2] || arr[1] + arr[2] <= arr[0] || arr[0] + arr[2] <= arr[1]) {
            return false;
        }
        return true;
    }
}