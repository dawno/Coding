import java.io.*;
import java.util.*;
import java.util.LinkedList;

class SpecificLevel {
    static class Node {
        int data;
        Node left;
        Node right;

        // constructor
        Node(int data) {
            this.data = data;
            left = null;
            right = null;
        }
    }

    static void printLevelOrder(Node root) {
        if (root == null) {
            return;
        }
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        while (true) {
            int nodecount = q.size();
            if (nodecount == 0) {
                break;
            }
            while (nodecount > 0) {
                Node node = q.peek();
                q.remove();
                if (node.left != null) {
                    q.add(node.left);
                }
                if (node.right != null) {
                    q.add(node.right);
                }
                nodecount--;
            }
        }
    }

    public static void main(String[] args) {
        // Let us create binary tree shown in above diagram
        /*
         * 1 / \ 2 3 / \ \ 4 5 6
         */

        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.right = new Node(6);

        printLevelOrder(root);

    }
}