import java.io.*;
import java.util.*;

class Optimal {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int x = 0; x < t; x++) {
            int n = in.nextInt();
            int k = in.nextInt();
            int arr[] = new int[n];
            int T[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = in.nextInt();
            }
            Arrays.fill(T, Integer.MAX_VALUE);
            T[0] = arr[0];
            int h = 0 + 1 + ((0 + 1) % k) + 1;
            T[h - 1] = T[0] + arr[h - 1];

            for (int i = 1; i < n; i++) {
                T[i] = Math.min(T[i], T[i - 1] + arr[i]);

                int m = (i + 1) + ((i + 1) % k) + 1;
                if (m <= n) {
                    T[m - 1] = Math.min(T[m - 1], T[i] + arr[m - 1]);

                }

            }
            System.out.println(T[n - 1]);
        }
    }
}