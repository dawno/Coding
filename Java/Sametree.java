import java.io.*;

class Sametree {
    boolean sameTree(Node root1, Node root2) {
        if (root1 == null && root2 == null) {
            return true;
        }
        if (root1 == null || root2 == null) {

            return false;
        }

        return (root1.data == root2.data) && sameTree(root.left, root2.left) && sameTree(root1.right, root2.right);

    }
}