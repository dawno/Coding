import java.io.*;
import java.util.*;
import java.math.BigInteger;

class partii {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextBigIntegr();
        int arr[] = new int[n];
        int total = 1;
        int curr = 1;
        int ans = -1;
        int min = BigInteger.;
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            total = total;
        }
        for (int i = 0; i < n; i++) {
            curr *= arr[i];
            int h = total / curr;
            int diff = curr.subtract(h);
            if (min.compareTo(diff)) {
                min = diff;
                ans = i + 1;
            }
        }
        System.out.println(ans);
    }
}
