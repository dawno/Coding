import java.io.*;
import java.util.Queue;
import java.util.LinkedList;

class BinaryInsertion {
    static class Node {
        int key;
        Node left, right;

        Node(int key) {
            this.key = key;
            left = null;
            right = null;
        }
    }

    static void inorder(Node temp) {
        if (temp == null) {
            return;
        }
        inorder(temp.left);
        System.out.println(temp.key);
        inorder(temp.right);
    }

    static void insert(Node temp, int key) {

        Queue<Node> q = new LinkedList<Node>();
        q.add(temp);
        while (!q.isEmpty()) {
            temp = q.peek();
            q.remove();
            if (temp.left == null) {
                temp.left = new Node(key);
                break;
            } else {
                q.add(temp);
            }
            if (temp.right == null) {
                temp.right = new Node(key);
                break;

            } else {
                q.add(temp.right);
            }
        }

    }

    public static void main(String[] args) {

    }
}