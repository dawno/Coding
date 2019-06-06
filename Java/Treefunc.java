import java.io.*;

class Treefunc {
    int size(Node root) {
        if (root == null) {
            return 0;
        }
        int leftsize = size(root.left);
        int rightsize = size(root.right);
        return leftsize + rightsize + 1;
    }

    int height(Node root) {
        if (root == null) {
            return 0;
        }
        int leftside = height(root.left);
        int rightside = height(root.right);
        return Math.max(leftside, rightside) + 1;
    }

    boolean printpath(Node root, int sum) {
        if (root == null) {
            return false;
        }
        if (root.left == null && root.right == null) {
            if (root.data == sum) {
                return true;
            } else {
                return false;
            }
        }
        if (printpath(root, sum - root.data) || printpath(root, sum - root.data)) {
            return true;
        }
        return false;

    }

    boolean isbst(Node root, int min, int max) {
        if (root == null) {
            return true;
        }
        if (root.data <= min && root.data > max) {
            return false;
        }
        return isbst(root.left, min, root.data) && isbst(root.right, root.data, max);
    }

}