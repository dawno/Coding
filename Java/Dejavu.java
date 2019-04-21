import java.util.*;

class Dejavu {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        int diff = -1;
        int ld = 0, ud = 0;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            ld = 0;
            ud = 0;
            x = -1;
            y = -1;
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[i] && ld < arr[i] - arr[j]) {
                    ld = arr[i] - arr[j];
                    x = j;
                }
            }
            for (int k = i + 1; k < n; k++) {
                if (arr[k] > arr[i] && ud < arr[k] - arr[i]) {
                    ud = arr[k] - arr[i];
                    y = k;
                }
            }
            if (x == -1 || y == -1) {
                System.out.println(diff);
            } else {
                System.out.println(y - x);
            }

        }
    }
}