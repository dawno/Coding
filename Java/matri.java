import java.io.*;
import java.util.*;
import java.util.Scanner;

class matri {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = "";
        int n = in.nextInt();
        int m = in.nextInt();
        char arr[][] = new char[n][m];
        int nrr[][] = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = in.next().charAt(0);
                nrr[i][j] = (int) arr[i][j];
            }
        }
        for (int i = 1; i < m; i++) {
            nrr[0][i] += nrr[0][i - 1];
        }
        for (int i = 1; i < n; i++) {
            nrr[i][0] += nrr[i - 1][0];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0) {
                    continue;
                }
                nrr[i][j] += Math.min(nrr[i - 1][j], nrr[i][j - 1]);
            }
        }
        int i = n - 1, j = m - 1;
        a = a + arr[n - 1][m - 1];
        while (i >= 0 && j >= 0) {
            if (i == 0 && j == 0) {
                i = -35;
                j = -35;
                continue;
            }
            if (j == 0 && i != 0) {
                a = a + arr[i - 1][j];
                // System.out.println(a + " 1");
                i = i - 1;
                continue;
            }
            if (i == 0 && j != 0) {
                a = a + arr[i][j - 1];
                // System.out.println(a + " 2");
                j = j - 1;
                continue;
            }
            if (nrr[i - 1][j] < nrr[i][j - 1]) {
                a = a + arr[i - 1][j];
                // System.out.println(a + " 3");
                i = i - 1;
            } else {
                a = a + arr[i][j - 1];
                // System.out.println(a + " 4");
                j = j - 1;
            }
        }
        char[] charr = a.toCharArray();
        Arrays.sort(charr);
        charr.toString();
        System.out.println(charr);

    }
}