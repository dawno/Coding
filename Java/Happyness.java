import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Happyness {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Integer> first = new ArrayList<Integer>();
        ArrayList<Integer> second = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            first.add(in.nextInt());
        }
        for (int i = 0; i < n; i++) {
            second.add(in.nextInt());
        }
        Collections.sort(first, Collections.reverseOrder());
        Collections.sort(second, Collections.reverseOrder());
        int fsum = 0, ssum = 0;
        int i = 0;
        while (i < 2 * n) {
            i++;
            if (i % 2 != 0) {
                if (!first.isEmpty() && !second.isEmpty()) {
                    if (first.get(0) > second.get(0)) {
                        fsum = fsum + first.get(0);
                        first.remove(0);

                    } else {
                        second.remove(0);
                    }
                } else if (first.isEmpty() && !second.isEmpty()) {
                    second.remove(0);
                } else if (!first.isEmpty() && second.isEmpty()) {
                    fsum = fsum + first.get(0);
                    first.remove(0);
                }
            } else {
                if (!second.isEmpty() && !first.isEmpty()) {
                    if (second.get(0) > first.get(0)) {
                        ssum = ssum + second.get(0);
                        second.remove(0);

                    } else {
                        first.remove(0);
                    }
                } else if (second.isEmpty() && !first.isEmpty()) {
                    first.remove(0);
                } else if (first.isEmpty() && !second.isEmpty()) {
                    ssum = ssum + second.get(0);
                    second.remove(0);
                }
            }
        }

        System.out.println(fsum - ssum);
    }
}