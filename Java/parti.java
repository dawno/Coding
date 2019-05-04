import java.io.*;
import java.util.*;

class parti {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        int total = 1;
        int curr = 1;
        int ans = -1;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            total *= arr[i];
        }
        for (int i = 0; i < n; i++) {
            curr *= arr[i];
            int h = total / curr;
            int diff = Math.abs(curr - h);
            if (min > diff) {
                min = diff;
                ans = i + 1;
            }
        }
        System.out.println(ans);
    }
}