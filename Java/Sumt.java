import java.io.*;

class Node {
    int data;
    Node left, right, nextRight;

    Node(int item) {
        data = item;
        left = right = nextRight = null;
    }
}

class Sumt {

    int isLeaf(Node node) {
        if (node == null) {

            return 0;
        }
        if (node.right == null && node.left == null) {
            return 1;
        }
        return 0;
    }

}