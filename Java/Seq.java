import java.io.*;
import java.util.*;

class Seq {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int x = 0; x < t; x++) {
            long p = in.nextLong();
            long q = in.nextLong();
            long r = in.nextLong();
            long a = in.nextLong();
            long b = in.nextLong();
            long c = in.nextLong();
            int n = in.nextInt();
            long[] f = new long[n + 1];
            // long[] g = new long[n];
            f[0] = p;
            f[1] = q;
            f[2] = r;
            for (int i = 3; i < n + 1; i++) {
                f[i] = a * f[i - 1] + b * f[i - 2] + c * f[i - 3] + (i * i * (i + 1));
            }
            long k = f[n] % 1000000007;
            System.out.println(k);
            in.close();
        }
    }
}