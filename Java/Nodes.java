import java.util.*;
import java.io.*;
import java.util.LinkedList;

class Node {
    int data;
    Node left, right;

    Node(int item) {
        data = item;
        left = right = null;
    }
}

class Nodes {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        Queue<Node> qu = new LinkedList<Node>();
        Node root = new Node(in.nextInt());
        qu.add(root);

        for (int i = 0; i < n - 1; i++) {
            Node temp;
            int r = in.nextInt();
            int v = in.nextInt();
            if (!qu.isEmpty()) {
                temp = qu.poll();
                if (temp.left != null) {
                    temp.right = new Node(v);
                    qu.add(temp.right);
                } else {
                    temp.left = new Node(v);
                    qu.add(temp.left);
                }
            }

        }

    }
}