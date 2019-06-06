import java.io.*;

class Node {
    int key;
    Node left, right;

    public Node(int key) {
        this.key = key;
        left = right = null;
    }
}

class Coveredtree {
    Node root;

    int sum(Node root) {
        if (root == null) {
            return 0;
        }
        return root.key + sum(root.left) + sum(root.right);
    }

    int uncoveredright(Node root) {
        if (root.left == null && root.right == null) {
            return root.key;
        }
        if (root.right != null) {
            return root.key + uncoveredright(root.right);
        } else {
            return root.key + uncoveredright(root.left);
        }
    }

    int uncoveredleft(Node root) {
        if (root.left == null && root.right == null) {
            return root.key;
        }
        if (root.left != null) {
            return root.key + uncoveredleft(root.left);

        } else {
            return root.key + uncoveredleft(root.right);
        }
    }
}